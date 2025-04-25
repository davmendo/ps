/* chunk_sort.c
 * Implementa o algoritmo de “chunks” para grandes entradas.
 */

#include "push_swap.h"
#include "print_ops.h"

static int find_max_pos(t_node *stack)
{
	int max;
	int pos;
	int max_pos;
	//int i;

	if (!stack)
		return (0);
	max = stack->index;
	max_pos = 0;
	pos = 0;
	while (stack)
	{
		if (stack->index > max)
		{
			max = stack->index;
			max_pos = pos;
		}
		stack = stack->next;
		pos++;
	}
	return (max_pos);
}

void sort_chunks(t_node **stack_a, t_node **stack_b)
{
	int total;
	int chunk_count;
	int chunk_size;
	int current_limit;
	int pushed;

	total = list_length(*stack_a);
	if (total <= 100)
		chunk_count = 5;
	else if (total <= 500)
		chunk_count = 11;
	else
		chunk_count = 22;
	chunk_size = total / chunk_count + (total % chunk_count != 0);
	current_limit = chunk_size;
	pushed = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= current_limit)
		{
			do_pb(stack_a, stack_b);
			pushed++;
			if ((*stack_b)->index < current_limit - chunk_size / 2)
				do_rb(stack_b);
			if (pushed == current_limit)
				current_limit += chunk_size;
		}
		else
			do_ra(stack_a);
	}
	while (*stack_b)
	{
		int pos = find_max_pos(*stack_b);
		int len = list_length(*stack_b);
		if (pos <= len / 2)
			while (pos-- > 0)
				do_rb(stack_b);
		else
		{
			int r = len - pos;
			while (r-- > 0)
				do_rrb(stack_b);
		}
		do_pa(stack_a, stack_b);
	}
}

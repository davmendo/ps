/* chunk_sort.c
 * Implementa o algoritmo de “chunks” para grandes entradas.
 */

#include "push_swap.h"
#include "print_ops.h"

static int	get_chunk_count(int total)
{
	if (total <= 100)
		return (5);
	else if (total <= 500)
		return (11);
	return (22);
}

static void	push_to_b_in_chunks(t_node **a, t_node **b, int chunk_size, int max_val)
{
	int	current_max;
	int	pushed;

	current_max = chunk_size;
	pushed = 0;
	while (*a && pushed < max_val)
	{
		if ((*a)->index <= current_max)
		{
			do_pb(a, b);
			pushed++;
			if ((*b)->index < current_max - chunk_size / 2)
				do_rb(b);
			if (pushed == current_max)
				current_max += chunk_size;
		}
		else
			do_ra(a);
	}
}

static void	push_back_to_a(t_node **a, t_node **b)
{
	int	max_index;
	int	stack_size;
	t_node	*current;
	int	position;

	while (*b)
	{
		current = *b;
		max_index = current->index;
		position = 0;
		stack_size = 0;
		while (current)
		{
			if (current->index > max_index)
			{
				max_index = current->index;
				position = stack_size;
			}
			current = current->next;
			stack_size++;
		}
		if (position <= stack_size / 2)
			while (position--)
				do_rb(b);
		else
			while (position++ < stack_size)
				do_rrb(b);
		do_pa(a, b);
	}
}

void	sort_chunks(t_node **stack_a, t_node **stack_b)
{
	int	total;
	int	chunk_count;
	int	chunk_size;

	total = list_length(*stack_a);
	chunk_count = get_chunk_count(total);
	chunk_size = total / chunk_count + (total % chunk_count != 0);

	push_to_b_in_chunks(stack_a, stack_b, chunk_size, total);
	push_back_to_a(stack_a, stack_b);
}

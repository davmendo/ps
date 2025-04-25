#include "push_swap.h"
#include "print_ops.h"

void assign_index(t_node *stack)
{
	t_node	*a;
	t_node	*b;
	int		count;

	a = stack;
	while (a)
	{
		count = 0;
		b = stack;
		while (b)
		{
			if (a->value > b->value)
				count++;
			b = b->next;
		}
		a->index = count;
		a = a->next;
	}
}

void sort_small(t_node **stack_a, t_node **stack_b)
{
	int len;

	len = list_length(*stack_a);
	if (len == 2 && (*stack_a)->value > (*stack_a)->next->value)
		do_sa(stack_a);
	else if (len == 3)
		sort_three(stack_a);
	else if (len <= 5)
		improved_sort_five(stack_a, stack_b);
}

/* A função sort_radix foi substituída pelo chunk sort para inputs grandes */

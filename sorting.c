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

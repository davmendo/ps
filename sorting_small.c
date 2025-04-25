#include "push_swap.h"
#include "print_ops.h"

void sort_three(t_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (a > b && b < c && a < c)
		do_sa(stack_a);
	else if (a > b && b > c)
	{
		do_sa(stack_a);
		do_rra(stack_a);
	}
	else if (a > b && b < c && a > c)
		do_ra(stack_a);
	else if (a < b && b > c && a < c)
	{
		do_sa(stack_a);
		do_ra(stack_a);
	}
	else if (a < b && b > c && a > c)
		do_rra(stack_a);
}

static int get_min_index(t_node *stack)
{
	int	min;
	int	pos;
	int	i;

	if (!stack)
		return (-1);
	min = stack->value;
	pos = 0;
	i = 0;
	while (stack)
	{
		if (stack->value < min)
		{
			min = stack->value;
			pos = i;
		}
		stack = stack->next;
		i++;
	}
	return (pos);
}

void improved_sort_five(t_node **stack_a, t_node **stack_b)
{
	int	len;
	int	pos;
	int	i;

	len = list_length(*stack_a);
	while (len > 3)
	{
		pos = get_min_index(*stack_a);
		if (pos > len / 2)
		{
			i = 0;
			while (i < len - pos)
			{
				do_rra(stack_a);
				i++;
			}
		}
		else
		{
			i = 0;
			while (i < pos)
			{
				do_ra(stack_a);
				i++;
			}
		}
		do_pb(stack_a, stack_b);
		len--;
	}
	sort_three(stack_a);
	while (*stack_b)
		do_pa(stack_a, stack_b);
}

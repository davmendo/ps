#include "push_swap.h"
#include "print_ops.h"

static int	find_min_position(t_node *stack)
{
	int		min;
	int		pos;
	int		min_pos;
	t_node	*current;

	if (!stack)
		return (-1);
	current = stack;
	min = current->value;
	min_pos = 0;
	pos = 0;
	while (current)
	{
		if (current->value < min)
		{
			min = current->value;
			min_pos = pos;
		}
		current = current->next;
		pos++;
	}
	return (min_pos);
}

void	sort_three(t_node **stack_a)
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

static void	push_min_to_b(t_node **a, t_node **b)
{
	int	pos;
	int	i;
	int	len;

	len = list_length(*a);
	pos = find_min_position(*a);
	if (pos <= len / 2)
	{
		i = 0;
		while (i < pos)
		{
			do_ra(a);
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < len - pos)
		{
			do_rra(a);
			i++;
		}
	}
	do_pb(a, b);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int	len;

	len = list_length(*stack_a);
	while (len > 3)
	{
		push_min_to_b(stack_a, stack_b);
		len--;
	}
	sort_three(stack_a);
	while (*stack_b)
		do_pa(stack_a, stack_b);
}

void	sort_small(t_node **stack_a, t_node **stack_b)
{
	int	len;

	len = list_length(*stack_a);
	if (len == 2)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			do_sa(stack_a);
		return ;
	}
	if (len == 3)
	{
		sort_three(stack_a);
		return ;
	}
	if (len <= 5)
		sort_five(stack_a, stack_b);
}

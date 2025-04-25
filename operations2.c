#include "push_swap.h"

void	op_ra(t_node **stack_a)
{
	t_node	*first;
	t_node	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	last = first;
	while (last->next)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
}

void	op_rb(t_node **stack_b)
{
	op_ra(stack_b);
}

void	op_rr(t_node **stack_a, t_node **stack_b)
{
	op_ra(stack_a);
	op_rb(stack_b);
}

void	op_rra(t_node **stack_a)
{
	t_node	*last;
	t_node	*prev;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	last = *stack_a;
	prev = NULL;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

void	op_rrb(t_node **stack_b)
{
	op_rra(stack_b);
}

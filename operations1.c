#include "push_swap.h"

void	op_sa(t_node **stack_a)
{
	t_node	*first;
	t_node	*second;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	first = *stack_a;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
}

void	op_sb(t_node **stack_b)
{
	op_sa(stack_b);
}

void	op_ss(t_node **stack_a, t_node **stack_b)
{
	op_sa(stack_a);
	op_sb(stack_b);
}

void	op_pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*push_node;

	if (!stack_b || !*stack_b)
		return ;
	push_node = *stack_b;
	*stack_b = push_node->next;
	push_node->next = *stack_a;
	*stack_a = push_node;
}

void	op_pb(t_node **stack_a, t_node **stack_b)
{
	op_pa(stack_b, stack_a);
}

#include "push_swap.h"

#include "push_swap.h"

/* Swap the first two elements */
void op_sa(t_node **stack_a)
{
    t_node *first;
    t_node *second;

    if (!stack_a || !*stack_a || !((*stack_a)->next))
        return ;
    first = *stack_a;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack_a = second;
}

void op_sb(t_node **stack_b)
{
    t_node *first;
    t_node *second;

    if (!stack_b || !*stack_b || !((*stack_b)->next))
        return ;
    first = *stack_b;
    second = first->next;
    first->next = second->next;
    second->next = first;
    *stack_b = second;
}

void op_ss(t_node **stack_a, t_node **stack_b)
{
    op_sa(stack_a);
    op_sb(stack_b);
}

void op_pa(t_node **stack_a, t_node **stack_b)
{
    t_node *temp;

    if (!stack_b || !*stack_b)
        return ;
    temp = *stack_b;
    *stack_b = temp->next;
    temp->next = *stack_a;
    *stack_a = temp;
}

void op_pb(t_node **stack_a, t_node **stack_b)
{
    t_node *temp;

    if (!stack_a || !*stack_a)
        return ;
    temp = *stack_a;
    *stack_a = temp->next;
    temp->next = *stack_b;
    *stack_b = temp;
}

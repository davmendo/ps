#include "push_swap.h"

void op_ra(t_node **stack_a)
{
    t_node *first;
    t_node *last;

    if (!stack_a || !*stack_a || !((*stack_a)->next))
        return ;
    first = *stack_a;
    *stack_a = first->next;
    first->next = NULL;
    last = *stack_a;
    while (last->next)
        last = last->next;
    last->next = first;
}

void op_rb(t_node **stack_b)
{
    t_node *first;
    t_node *last;

    if (!stack_b || !*stack_b || !((*stack_b)->next))
        return ;
    first = *stack_b;
    *stack_b = first->next;
    first->next = NULL;
    last = *stack_b;
    while (last->next)
        last = last->next;
    last->next = first;
}

void op_rr(t_node **stack_a, t_node **stack_b)
{
    op_ra(stack_a);
    op_rb(stack_b);
}

void op_rra(t_node **stack_a)
{
    t_node *prev = NULL;
    t_node *last = *stack_a;

    if (!stack_a || !*stack_a || !((*stack_a)->next))
        return ;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
}

void op_rrb(t_node **stack_b)
{
    t_node *prev = NULL;
    t_node *last = *stack_b;

    if (!stack_b || !*stack_b || !((*stack_b)->next))
        return ;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
}

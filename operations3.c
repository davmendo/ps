#include "push_swap.h"

void op_rrr(t_node **stack_a, t_node **stack_b)
{
    op_rra(stack_a);
    op_rrb(stack_b);
}

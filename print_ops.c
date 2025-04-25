#include "push_swap.h"

static void	print_op(char *op)
{
	write(1, op, ft_strlen(op));
	write(1, "\n", 1);
}

void	do_sa(t_node **a)
{
	op_sa(a);
	print_op("sa");
}

void	do_sb(t_node **b)
{
	op_sb(b);
	print_op("sb");
}

void    do_ss(t_node **a, t_node **b)
{
	op_ss(a, b);
	print_op("ss");
}

void	do_pa(t_node **a, t_node **b)
{
	op_pa(a, b);
	print_op("pa");
}

void	do_pb(t_node **a, t_node **b)
{
	op_pb(a, b);
	print_op("pb");
}

void	do_ra(t_node **a)
{
	op_ra(a);
	print_op("ra");
}

void	do_rb(t_node **b)
{
	op_rb(b);
	print_op("rb");
}

void	do_rr(t_node **a, t_node **b)
{
	op_rr(a, b);
	print_op("rr");
}

void	do_rra(t_node **a)
{
	op_rra(a);
	print_op("rra");
}

void	do_rrb(t_node **b)
{
	op_rrb(b);
	print_op("rrb");
}

void	do_rrr(t_node **a, t_node **b)
{
	op_rrr(a, b);
	print_op("rrr");
}

#ifndef PRINT_OPS_H
# define PRINT_OPS_H

# include "push_swap.h"

/* Wrapper functions that execute operations and print them */
void	do_sa(t_node **a);
void	do_sb(t_node **b);
void	do_ss(t_node **a, t_node **b);
void	do_pa(t_node **a, t_node **b);
void	do_pb(t_node **a, t_node **b);
void	do_ra(t_node **a);
void	do_rb(t_node **b);
void	do_rr(t_node **a, t_node **b);
void	do_rra(t_node **a);
void	do_rrb(t_node **b);
void	do_rrr(t_node **a, t_node **b);

#endif

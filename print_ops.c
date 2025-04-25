#include "push_swap.h"

/* Wrappers que chamam op_* e depois imprimem a instrução */
void do_sa(t_node **a) { op_sa(a); write(1, "sa\n", 3); }
void do_sb(t_node **b) { op_sb(b); write(1, "sb\n", 3); }
void do_ss(t_node **a, t_node **b) { op_ss(a, b); write(1, "ss\n", 3); }
void do_pa(t_node **a, t_node **b) { op_pa(a, b); write(1, "pa\n", 3); }
void do_pb(t_node **a, t_node **b) { op_pb(a, b); write(1, "pb\n", 3); }
void do_ra(t_node **a) { op_ra(a); write(1, "ra\n", 3); }
void do_rb(t_node **b) { op_rb(b); write(1, "rb\n", 3); }
void do_rr(t_node **a, t_node **b) { op_rr(a, b); write(1, "rr\n", 3); }
void do_rra(t_node **a) { op_rra(a); write(1, "rra\n", 4); }
void do_rrb(t_node **b) { op_rrb(b); write(1, "rrb\n", 4); }
void do_rrr(t_node **a, t_node **b) { op_rrr(a, b); write(1, "rrr\n", 4); }

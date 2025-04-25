#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

/* Core Functions */
void	error_exit(void);
t_node	*create_node(int value);
void	add_back(t_node **stack, t_node *new_node);
t_node	*parse_arguments(int argc, char **argv);
void	free_stack(t_node *stack);
void	free_split(char **split);

/* Utils */
int		list_length(t_node *stack);
int		is_valid_number(char *str);
int		has_duplicates(t_node *stack);
int		is_sorted(t_node *stack);
void	assign_index(t_node *stack);

/* Sorting Algorithms */
void	sort_small(t_node **stack_a, t_node **stack_b);
void	sort_three(t_node **stack_a);
void	sort_chunks(t_node **stack_a, t_node **stack_b);

/* Operations */
void	op_sa(t_node **stack_a);
void	op_sb(t_node **stack_b);
void	op_ss(t_node **stack_a, t_node **stack_b);
void	op_pa(t_node **stack_a, t_node **stack_b);
void	op_pb(t_node **stack_a, t_node **stack_b);
void	op_ra(t_node **stack_a);
void	op_rb(t_node **stack_b);
void	op_rr(t_node **stack_a, t_node **stack_b);
void	op_rra(t_node **stack_a);
void	op_rrb(t_node **stack_b);
void	op_rrr(t_node **stack_a, t_node **stack_b);

#endif

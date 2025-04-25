#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "push_swap.h"

/* Parsing functions for bonus (checker) */
t_node	*parse_arguments_bonus(int argc, char **argv);
t_node	*create_node_bonus(int value);
void	add_back_bonus(t_node **stack, t_node *new_node);

#endif

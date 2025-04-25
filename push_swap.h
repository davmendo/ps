#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

/* ---------------------- Estrutura da Pilha ---------------------- */
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

/* ---------------------- Parsing e Main ---------------------- */
void	error_exit(void);
t_node	*create_node(int value);
void	add_back(t_node **stack, t_node *new_node);
t_node	*parse_arguments(int argc, char **argv);

/* ---------------------- Utilitários ---------------------- */
int		list_length(t_node *stack);
void	free_stack(t_node *stack);
void	free_split(char **split);
int		is_valid_number(char *str);
int		has_duplicates(t_node *stack);
int	is_sorted(t_node *stack);

/* ---------------------- Algoritmos de Ordenação ---------------------- */
void	assign_index(t_node *stack);
/* Ordena pilhas pequenas (≤ 5 elementos) */
void	sort_small(t_node **stack_a, t_node **stack_b);
/* Ordena pilhas grandes usando algoritmo de “chunks” */
void	sort_chunks(t_node **stack_a, t_node **stack_b);

/* ---------------------- Ordenação para 3 e 5 elementos ---------------------- */
void	sort_three(t_node **stack_a);
void	improved_sort_five(t_node **stack_a, t_node **stack_b);

/* ---------------------- Operações ---------------------- */
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

/* ---------------------- Funções Bonus (Checker) ---------------------- */
char	*get_next_line(int fd);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);

#endif

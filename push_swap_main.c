#include "push_swap.h"
#include "print_ops.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

t_node	*create_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		error_exit();
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	add_back(t_node **stack, t_node *new_node)
{
	t_node	*tmp;

	if (!stack || !new_node)
		return ;
	if (!*stack)
		*stack = new_node;
	else
	{
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
}

t_node	*parse_arguments(int argc, char **argv)
{
	t_node	*stack;
	int		i;
	char	**nums;
	int		j;
	int		num;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		nums = ft_split(argv[i], ' ');
		if (!nums || !nums[0])
			error_exit();
		j = 0;
		while (nums[j])
		{
			if (!is_valid_number(nums[j]))
			{
				free_split(nums);
				error_exit();
			}
			num = ft_atoi(nums[j]);
			add_back(&stack, create_node(num));
			j++;
		}
		free_split(nums);
		i++;
	}
	if (has_duplicates(stack))
		error_exit();
	return (stack);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc < 2)
		return (0);
	stack_a = parse_arguments(argc, argv);
	if (is_sorted(stack_a))
	{
		free_stack(stack_a);
		return (0);
	}
	stack_b = NULL;
	assign_index(stack_a);
	if (list_length(stack_a) <= 5)
		sort_small(&stack_a, &stack_b);
	else
		sort_chunks(&stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}

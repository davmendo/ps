#include "push_swap.h"
#include "print_ops.h"

static void	process_split_numbers(char **nums, t_node **stack)
{
	int	j;
	int	num;

	j = 0;
	while (nums[j])
	{
		if (!is_valid_number(nums[j]))
		{
			free_split(nums);
			if (*stack)
				free_stack(*stack);
			error_exit();
		}
		num = ft_atoi(nums[j]);
		add_back(stack, create_node(num));
		j++;
	}
}

t_node	*parse_arguments(int argc, char **argv)
{
	t_node	*stack;
	int		i;
	char	**nums;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		nums = ft_split(argv[i], ' ');
		if (!nums || !nums[0])
		{
			if (stack)
				free_stack(stack);
			error_exit();
		}
		process_split_numbers(nums, &stack);
		free_split(nums);
		i++;
	}
	if (has_duplicates(stack))
	{
		free_stack(stack);
		error_exit();
	}
	return (stack);
}

void	sort_stack(t_node **stack_a)
{
	t_node	*stack_b;
	int		len;

	stack_b = NULL;
	len = list_length(*stack_a);
	
	assign_index(*stack_a);
	if (len <= 5)
		sort_small(stack_a, &stack_b);
	else
		sort_chunks(stack_a, &stack_b);
	
	if (stack_b)
		free_stack(stack_b);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;

	if (argc < 2)
		return (0);

	stack_a = parse_arguments(argc, argv);
	if (!stack_a)
		return (0);

	if (!is_sorted(stack_a))
		sort_stack(&stack_a);

	free_stack(stack_a);
	return (0);
}

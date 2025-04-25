#include "push_swap.h"

int list_length(t_node *stack)
{
	int	len = 0;
	while (stack)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

void free_stack(t_node *stack)
{
	t_node	*temp;
	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}

void free_split(char **split)
{
	int i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

int has_duplicates(t_node *stack)
{
	t_node	*a;
	t_node	*b;

	a = stack;
	while (a)
	{
		b = a->next;
		while (b)
		{
			if (a->value == b->value)
				return (1);
			b = b->next;
		}
		a = a->next;
	}
	return (0);
}

int is_valid_number(char *str)
{
    int         i = 0;
    long long   res = 0;
    int         sign = 1;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    if (!str[i])
        return (0);
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        res = res * 10 + (str[i] - '0');
        if (sign == 1 && res > 2147483647)
            return (0);
        if (sign == -1 && res > 2147483648LL)
            return (0);
        i++;
    }
    return (1);
}

int is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

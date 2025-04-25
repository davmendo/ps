#include "checker_bonus.h"

void    error_exit_bonus(void)
{
    write(2, "Error\n", 6);
    exit(EXIT_FAILURE);
}

t_node  *create_node_bonus(int value)
{
    t_node  *node;

    node = malloc(sizeof(t_node));
    if (!node)
        error_exit_bonus();
    node->value = value;
    node->index = -1;
    node->next = NULL;
    return (node);
}

void    add_back_bonus(t_node **stack, t_node *new_node)
{
    t_node  *tmp;

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

t_node  *parse_arguments_bonus(int argc, char **argv)
{
    t_node  *stack;
    t_node  *node;
    int     i;
    int     num;

    stack = NULL;
    i = 1;
    while (i < argc)
    {
        if (!is_valid_number(argv[i]))
            error_exit_bonus();
        num = ft_atoi(argv[i]);
        node = create_node_bonus(num);
        add_back_bonus(&stack, node);
        i++;
    }
    if (has_duplicates(stack))
        error_exit_bonus();
    return (stack);
}

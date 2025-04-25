/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:02:10 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 21:18:49 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int main(void)
{
    t_list *head = ft_lstnew("1 node");
    if (!head)
    {
        printf("erro\n");
    }
    t_list *node2 = ft_lstnew("2 node");
    t_list *node3 = ft_lstnew("3 node");

    if (!node2 || !node3)
    {
        printf("error\n");
        ft_lstclear(&head, free);
    }
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);
    t_list *current = head;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    ft_lstclear(&head, NULL);

    return (0);
}
*/

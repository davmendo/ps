/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:53:22 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/12 19:44:34 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
int main(void)
{
    t_list *head = ft_lstnew(ft_strdup("Hello"));
    t_list *node2 = ft_lstnew(ft_strdup("World"));

    if (!head || !node2)
    {
        printf("error\n");
    }

    ft_lstadd_back(&head, node2);
    ft_lstclear(&head, free);

    return (0);
}
*/	

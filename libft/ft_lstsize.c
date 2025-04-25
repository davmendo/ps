/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 20:34:58 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 20:46:27 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
int main(void)
{
	t_list *head = ft_lstnew("1 node");
    	t_list *node2 = ft_lstnew("2 node");
    	t_list *node3 = ft_lstnew("3 node");

    	if (!head || !node2 || !node3)
    	{
        	printf("error\n");
        	return (1);
        }
    	ft_lstadd_back(&head, node2);
    	ft_lstadd_back(&head, node3);

    	int size = ft_lstsize(head);
    	printf("size: %d\n", size);
    	ft_lstclear(&head, NULL);

    return (0);
}
*/

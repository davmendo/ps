/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:15:18 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 20:49:21 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main(void)
{
    	int val1 = 10;
    	int val2 = 20;
    	int val3 = 30;

    	t_list *node1 = ft_lstnew(&val1);
    	t_list *node2 = ft_lstnew(&val2);
    	t_list *node3 = ft_lstnew(&val3);

    	node1->next = node2;
    	node2->next = node3;

    	t_list *current_node = node1;
    	while (current_node != NULL)
    	{
        	printf("Valor do nó: %d\n", *(int *)(current_node->content));
        	current_node = current_node->next;
    	}

    	free(node1);
    	free(node2);
    	free(node3);
    	return (0);
}
*/

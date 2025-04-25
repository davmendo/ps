/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:05:16 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 22:06:06 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void to_uppercase(void *content)
{
    	char *str = (char *)content;
    	int i = 0;

    	while (str[i])
   	{
        	str[i] = ft_toupper(str[i]);
        	i++;
   	}
}

int main(void)
{
    	t_list *head = ft_lstnew(strdup("hello"));
    	t_list *node2 = ft_lstnew(strdup("world"));
    	t_list *node3 = ft_lstnew(strdup("list"));

    	ft_lstadd_back(&head, node2);
    	ft_lstadd_back(&head, node3);


    	ft_lstiter(head, to_uppercase);

    	t_list *current = head;
    	while (current)
    	{
        	printf("%s\n", (char *)current->content);
        	current = current->next;
    	}
    	ft_lstclear(&head, free);

    	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:17:36 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/13 21:16:23 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void *to_uppercase(void *content)
{
    char *str = (char *)content;
    char *new_str = ft_strdup(str);
    if (new_str)
    {
        for (int i = 0; new_str[i]; i++)
        {
            new_str[i] = ft_toupper(new_str[i]);
        }
    }
    return (new_str);
}

int main(void)
{
    	t_list *original_list = ft_lstnew(ft_strdup("hello"));
    	ft_lstadd_back(&original_list, ft_lstnew(ft_strdup("world")));
    	ft_lstadd_back(&original_list, ft_lstnew(ft_strdup("libft")));

    	t_list *new_list = ft_lstmap(original_list, to_uppercase, free);

    	printf("original:\n");
    	t_list *temp = original_list;
    	while (temp)
    	{
        	printf("%s\n", (char *)temp->content);
        	temp = temp->next;
    	}
    	printf("\nnew:\n");
    	temp = new_list;
    	while (temp)
    	{
        	printf("%s\n", (char *)temp->content);
        	temp = temp->next;
    	}
   	ft_lstclear(&original_list, free);
    	ft_lstclear(&new_list, free);

   	return (0);
}
*/

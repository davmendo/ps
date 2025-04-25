/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:50:20 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 20:47:59 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("Conteúdo do nó: %s\n", (char *)lst->content);
        lst = lst->next;
    }
}

int main(void)
{
    // Inicialmente, a lista está vazia
    t_list *head = NULL;

    // Criando novos nós com diferentes conteúdos
    t_list *node1 = ft_lstnew("Nó 1");
    t_list *node2 = ft_lstnew("Nó 2");
    t_list *node3 = ft_lstnew("Nó 3");

    // Adicionando os nós à frente da lista usando ft_lstadd_front
    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    // Imprimindo a lista
    print_list(head);

    // Liberando a memória alocada
    while (head)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
*/

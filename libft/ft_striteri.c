/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:04:25 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/07 22:30:26 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void ft_to_upper(unsigned int i, char *c)
{
	if (i % 2 != 0)
		*c = ft_toupper(*c);
}

int main(void)
{
    char str[] = "davmendo e DAVMENDO";

    ft_striteri(str, ft_to_upper);
    printf("modified string: %s\n", str); 

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:29:07 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:12:25 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
	char test_char;
	
	test_char = 'A';
    	if (ft_isalpha(test_char))
        	ft_putstr_fd("'A' is a letter\n", 1);
    	else
        	ft_putstr_fd("'A' is not a letter\n", 1);

    	test_char = '!';
    	if (ft_isalpha(test_char))
        	ft_putstr_fd("'!' is a letter\n", 1);
   	 else
        	ft_putstr_fd("'!' is not a letter\n", 1);

	test_char = 'g';
    	if (ft_isalpha(test_char))
        	ft_putstr_fd("'g' is a letter\n", 1);
    	else
        	ft_putstr_fd("'g' is not a letter\n", 1);

    	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:25:28 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/22 18:05:38 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
    	int test_char;

    	test_char = 'A';
    	if (ft_isascii(test_char))
        	ft_putstr_fd("'A' is an ASCII character\n", 1);
   	else
        	ft_putstr_fd("'A' is not an ASCII character\n", 1);


    	test_char = 200;
    	if (ft_isascii(test_char))
        	ft_putstr_fd("200 is an ASCII character\n", 1);
    	else
        	ft_putstr_fd("200 is not an ASCII character\n", 1);


    	test_char = '5';
    	if (ft_isascii(test_char))
        	ft_putstr_fd("'5' is an ASCII character\n", 1);
    	else
        	ft_putstr_fd("'5' is not an ASCII character\n", 1);

    	return (0);
}
*/

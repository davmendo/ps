/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:34:07 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:38:09 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
    	if (ft_isprint(test_char))
        	ft_putstr_fd("'A' is a printable character\n", 1);
    	else
        	ft_putstr_fd("'A' is not a printable character.\n", 1);

    	test_char = '\t';
    	if (ft_isprint(test_char))
        	ft_putstr_fd("'\\t' is a printable character\n", 1);
    	else
       		ft_putstr_fd("'\\t' is not a printable character.\n", 1);
        
    	test_char = ' ';
    	if (ft_isprint(test_char))
        	ft_putstr_fd("' ' is a printable character\n", 1);
    	else
        	ft_putstr_fd("' ' is not a printable character.\n", 1);

    	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:02:29 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:11:34 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

    	test_char = '5';
    	if (ft_isdigit(test_char))
        	ft_putstr_fd("'5' is a digit\n", 1);
    	else
        	ft_putstr_fd("'5' is not a digit\n", 1);

    	test_char = 'A';
    	if (ft_isdigit(test_char))
        	ft_putstr_fd("'A' is a digit\n", 1);
    	else
        	ft_putstr_fd("'A' is not a digit\n", 1);

    	test_char = '0';
    	if (ft_isdigit(test_char))
        	ft_putstr_fd("'0' is a digit\n", 1);
    	else
        	ft_putstr_fd("'0' is not a digit\n", 1);
        	
        return (0);
}
*/

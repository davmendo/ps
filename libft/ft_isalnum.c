/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:13:02 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/21 21:21:41 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	if (ft_isalnum(test_char))
		ft_putstr_fd("'A' alphanumeric\n", 1);
	else
		ft_putstr_fd("'A' not alphanumeric\n", 1);
	
	test_char = '!';
	if (ft_isalnum(test_char))
        	ft_putstr_fd("'!' alphanumeric\n", 1);
        else
        	ft_putstr_fd("'!' not alphanumeric\n", 1);

	test_char = '9';
    		if (ft_isalnum(test_char))
        ft_putstr_fd("'9' alphanumeric\n", 1);
    		else
        ft_putstr_fd("'9' not alphanumeric\n", 1);
        
        return (0);
}
*/

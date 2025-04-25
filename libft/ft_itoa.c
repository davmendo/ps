/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:24:38 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/07 20:32:02 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_get_num_len(num);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}
/*
int main(void)
{
    	int test_number;
    	char *result;
    
    	test_number = 1234;
    	result = ft_itoa(test_number);
    	if (result)
    	{	
        	printf("result: (%d): %s\n", test_number, result);
        	free(result);
    	}

    	test_number = -5678;
    	result = ft_itoa(test_number);
    	if (result)
    	{
        	printf("result: ft_itoa(%d): %s\n", test_number, result);
        	free(result);
    	}
    	
    	test_number = 0;
    	result = ft_itoa(test_number);
    	if (result)
    	{
        	printf("result: ft_itoa(%d): %s\n", test_number, result);
        	free(result);
    	}

    	return (0);
}
*/

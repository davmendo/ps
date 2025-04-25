/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:31:42 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/26 22:59:47 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = ((unsigned char *)s1);
	str2 = ((unsigned char *)s2);
	while (n-- > 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (0);
}
/*
int main(void)
{
    	char str1[] = "Hello, World!\0Extra data";
    	char str2[] = "Hello, World!\0Different data";
    	
    	int result_memcmp = ft_memcmp(str1, str2, sizeof(str1));
    	if (result_memcmp == 0)
        	ft_putstr_fd("[ft_memcmp] The memories are the same.\n", 1);
   	 else
        	ft_putstr_fd("[ft_memcmp] Memories are different.\n", 1);

    	int result_strncmp = ft_strncmp(str1, str2, 20);
    	if (result_strncmp == 0)
        	ft_putstr_fd("[ft_strncmp] The strings are the same.\n", 1);
    	else
        	ft_putstr_fd("[ft_strncmp] The strings are different.\n", 1);
        	
    	return (0);
}
*/

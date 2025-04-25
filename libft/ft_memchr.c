/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:10:05 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/26 21:21:00 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = ((const unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (str[i] == (const unsigned char)c)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    	char str[] = "Hello, World!\0Extra data after null";
    	char c = 'W';
    	void *result_memchr;
    	char *result_strchr;
    	
    	result_memchr = ft_memchr(str, c, sizeof(str));
    	if (result_memchr)
printf("[ft_memchr] character '%c' found in position: %ld\n", c, 
(char *)result_memchr - str);
    	else
        	printf("[ft_memchr] character '%c' not found\n", c);

    	result_strchr = ft_strchr(str, c);
    	if (result_strchr)
        	printf("[ft_strchr] character '%c' found in position: %ld\n", 
        	c, result_strchr - str);
   	else
        	printf("[ft_strchr] character '%c' not found\n", c);
    	c = 'E';
    		result_memchr = ft_memchr(str, c, sizeof(str));
    	if (result_memchr)
printf("[ft_memchr] character '%c' found in position: %ld\n", c, 
(char *)result_memchr - str);
    	else
     		printf("[ft_memchr] character '%c' not found\n", c);

    	result_strchr = ft_strchr(str, c);
    	if (result_strchr)
        	printf("[ft_strchr] character '%c' found in position: %ld\n", 
        	c, result_strchr - str);
    	else
        	printf("[ft_strchr] character '%c' not found\n", c);

    	return (0);
}
*/

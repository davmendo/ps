/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:59:57 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/28 20:37:14 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < size)
	{
		i++;
	}
	j = 0;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
/*
int main(void)
{
    	char buffer1[30] = "Hello";
    	const char *source = " World!";

    	printf("after ft_strlcat: \"%s\"\n", buffer1);
    	size_t result1 = ft_strlcat(buffer1, source, sizeof(buffer1));
    	printf("before ft_strlcat: \"%s\"\n", buffer1);
    	printf("final length (ft_strlcat): %zu\n", result1);
    	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:14:34 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/23 19:08:50 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (src[l])
	{
		l++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}
/*
int main(void)
{
    const char src[] = "Hello, World!";
    char dst[20]; 

    size_t copied_length = ft_strlcpy(dst, src, sizeof(dst));
    printf("Fonte: %s\n", src);
    printf("Destino após ft_strlcpy: %s\n", dst);
    printf("Comprimento total da fonte: %zu\n", copied_length);

    return 0;
}
*/

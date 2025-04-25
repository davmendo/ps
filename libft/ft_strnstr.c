/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:26:36 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/29 20:18:35 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	little_len = ft_strlen(little);
	while (*big != '\0' && len >= little_len)
	{
		if (ft_memcmp (big, little, little_len) == 0)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *big = "Hello, World! Welcome to C programming.";
    const char *little = "World";
    size_t len = 20;

    char *result_ft = ft_strnstr(big, little, len);
    if (result_ft)
    	printf("substring '%s' found in: \"%s\"\n", little, result_ft);
    else
        printf("substring not found");
}
*/

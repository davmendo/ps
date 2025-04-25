/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:55:08 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/14 19:00:26 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	r = (char *)malloc(len1 + len2 + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	ft_memmove(r, s1, len1);
	ft_memmove(r + len1, s2, len2);
	r[len1 + len2] = '\0';
	return (r);
}
/*
int main(void)
{
    	char *s1 = "Hello";
    	char *s2 = " World";
    	char *result;

    	result = ft_strjoin(s1, s2);
    	if (result)
    	{
        	printf("%s\n", result);
        	free(result);
    	}
   	 else
    	{
        	printf("error allocating memory\n");
    	}

    	return (0);
}
*/

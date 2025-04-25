/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:44:06 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/12 01:26:26 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*end;
	char		*trim;
	size_t		len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	end = s1 + ft_strlen(s1) - 1;
	while (end > s1 && ft_strchr(set, *end))
	{
		end--;
	}
	len = end - s1 + 1;
	trim = (char *)malloc(len + 1);
	if (!trim)
		return (NULL);
	ft_memmove(trim, s1, len);
	trim[len] = '\0';
	return (trim);
}
/*
int main()
{
    char *s1 = "----Hello, world!-----";
    char *set = "-+";
    char *result = ft_strtrim(s1, set);
    
    printf("\nstring original: %s\n", s1);
    if (result != NULL)
    {
        printf("result: '%s'\n", result);
        free(result);
    }
    else
    {
        printf("error.\n");
    }

    return (0);
}
*/

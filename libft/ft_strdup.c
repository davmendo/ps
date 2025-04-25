/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:35:32 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/28 20:35:50 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i])
	{
		i++;
	}
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!dest)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char *original = "Hello, world!";
    char *copy;


    copy = ft_strdup(original);
    if (!copy)
    {
        printf("error allocating memory to duplicate string\n");
    }
    printf("string original: %s\n", original);
    printf("string duplicate: %s\n", copy);
    free(copy);

    return (0);
}
*/

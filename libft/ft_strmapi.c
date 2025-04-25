/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:32:27 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/07 22:29:48 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
/*
char	ft_str_transform(unsigned int index, char c)
{
	if (index % 2 == 0)
		return ft_toupper(c);
	return c; 
}

int	main(void)
{
	char *s = "davmendo e +-=DAVMENDO42";
	char *result;
	result = ft_strmapi(s, ft_str_transform);
	if (result)
	{
		printf("original string: %s\n", s);
		printf("transformed string: %s\n", result);
		free(result);
	}
	else
	{
        	printf("memory allocation failure.\n");
	}
	return (0);
}
*/

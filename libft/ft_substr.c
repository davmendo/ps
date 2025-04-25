/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:35:51 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/14 19:13:53 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate_empty_string(void)
{
	char	*r;

	r = (char *)malloc(1);
	if (r == NULL)
		return (NULL);
	r[0] = '\0';
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_allocate_empty_string());
	if (len > s_len - start)
		len = s_len - start;
	r = (char *)malloc(len + 1);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
/*
int	main()
{
	char	str[] = "davmendo 42 piscine";
	ft_putendl_fd(ft_substr(str, 9, 15), 1);
}
*/

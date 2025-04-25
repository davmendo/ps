/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:07:42 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/28 20:32:35 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src && n > 0)
	{
		return (NULL);
	}
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
int main(void)
{
    	char src[] = "Hello, World!";
    	char dest[20];

    	ft_memcpy(dest, src, sizeof(src));

    	ft_putstr_fd("src:: ", 1);
    	ft_putstr_fd(src, 1);
    	ft_putstr_fd("\ndest: ", 1);
    	ft_putstr_fd(dest, 1);
    	ft_putstr_fd("\n", 1);

    	return(0);
}
*/

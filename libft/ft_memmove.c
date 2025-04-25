/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:45:15 by davmendo          #+#    #+#             */
/*   Updated: 2024/10/25 23:03:17 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src && n > 0)
	{
		return (NULL);
	}
	if (d < s || d >= (s + n))
	{
		return (ft_memcpy(dest, src, n));
	}
	else
	{
		d = d + n;
		s = s + n;
		while (n-- > 0)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
/*
int main(void)
{
    char buffer1[30] = "1234567890abcdefghij";
    char buffer2[30] = "1234567890abcdefghij";

    printf("before: %s\n", buffer1);
    ft_memmove(buffer1 + 5, buffer1, 10); 
    printf("after: %s\n", buffer1);

    printf("\nbefore: %s\n", buffer2);
    ft_memcpy(buffer2 + 5, buffer2, 10);  
    printf("after: %s\n", buffer2);

    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 00:19:27 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 22:24:11 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	ch;

	ch = (unsigned char)c;
	last = NULL;
	while (*s)
	{
		if (*s == ch)
		{
			last = s;
		}
		s++;
	}
	if (ch == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}
/*
void test_strrchr(const char *str, int c) {
    char *result = ft_strrchr(str, c);

    if (result != NULL) {
printf("found '%c' in \"%s\" at position %ld\n", c, str, result - str);
    } else {
        printf("test passed: '%c' not found in \"%s\"\n", c, str);
    }
}

int main() {
    test_strrchr("Hello, World!", 'o');      
    test_strrchr("Hello, World!", 'z');     
    test_strrchr("C programming", 'g');       
    test_strrchr("C programming", 'C');        
    test_strrchr("C programming", 'p');        
    test_strrchr("1234567890", '5');          
    test_strrchr("1234567890", '0');           
    test_strrchr("abcdefg", 'a');              
    test_strrchr("abcdefg", 'g');              
    test_strrchr("abcdefg", 'h');           
    test_strrchr("", 'a');

    return 0;
}
*/

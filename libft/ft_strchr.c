/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:09:19 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/09 22:38:29 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}

/*
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((unsigned char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((unsigned char *)s);
	}
	return (NULL);
}

void test_strchr(const char *str, int c) {
    char *result = ft_strchr(str, c);

    // Verifica se o caractere está presente na string
    if (result != NULL) {
printf("Found '%c' in \"%s\" at position %ld\n", c, str, result - str);
    } else {
        printf("Test passed: '%c' not found in \"%s\"\n", c, str);
    }
}

int main() {
    // Testes com diferentes strings e caracteres
    test_strchr("Hello, World!", 'o');       // Deve encontrar 'o'
    test_strchr("Hello, World!", 'z');       // Não deve encontrar 'z'
    test_strchr("C programming", 'p');        // Deve encontrar 'p'
    test_strchr("C programming", 'C');        // Deve encontrar 'C'
    test_strchr("C programming", 'g');        // Deve encontrar 'g'
    test_strchr("1234567890", '5');           // Deve encontrar '5'
    test_strchr("1234567890", '0');           // Deve encontrar '0'
    test_strchr("abcdefg", 'a');              // Deve encontrar 'a'
    test_strchr("abcdefg", 'g');              // Deve encontrar 'g'
    test_strchr("abcdefg", 'h');              // Não deve encontrar 'h'
    test_strchr("", 'a');// Não deve encontrar 'a' em uma string vazia

    return 0;
}
*/

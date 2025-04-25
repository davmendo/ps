/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:12:05 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/14 19:24:21 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	r;

	sign = 1;
	r = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		r = r * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * r);
}
/*
int	main(void)
{
        printf("%d\n", ft_atoi("123456789"));
          printf("%d\n", atoi("123456789"));
          printf("ft_atoi: %d\n", ft_atoi("123456"));
          printf("atoi: %d\n", atoi("123456"));
          printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
          printf("atoi: %d\n", atoi("12Three45678"));
          printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
          printf("atoi: %d\n", atoi("Hello World!"));
          printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
          printf("atoi: %d\n", atoi("+42 BLAH!"));
          printf("ft_atoi: %d\n", ft_atoi("-42"));
          printf("atoi: %d\n", atoi("-42"));
          printf("ft_atoi: %d\n", ft_atoi("     +42"));
          printf("atoi: %d\n", atoi("     +42"));
          printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
          printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
          printf("ft_atoi: %d\n", ft_atoi("5"));
          printf("atoi: %d\n", atoi("5"));
 
          return 0; 
}
*/

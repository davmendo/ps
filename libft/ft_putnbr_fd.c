/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:09:34 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/12 19:45:27 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}
/*
int	main(void)
{
	int	i = 69;
	int	j = -420;
	int	min = -2147483648;
	int	max = 2147483647;

	ft_putnbr_fd(i, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(j, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(min, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(max, 1);
	ft_putchar_fd('\n', 1);
}
*/

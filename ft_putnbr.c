/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 08:28:14 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/03/30 17:17:42 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *i)
{
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648", i);
		return;
	}
	if (nb < 0)
	{
		ft_putchr('-', i);
		nb *= -1;
	}
	if (nb <= 9)
		ft_putchr(nb + 48, i);
	if (nb > 9)
	{
		ft_putnbr(nb / 10, i);
		ft_putnbr(nb % 10, i);
	}
}

void	ft_putuns(unsigned int nb, int *i)
{
	if (nb <= 9)
		ft_putchr(nb + 48, i);
	if (nb > 9)
	{
		ft_putuns(nb / 10, i);
		ft_putuns(nb % 10, i);
	}
}

// ft_putbase(123123, i, "0123456789");

// void	ft_putbase(int nb, int *i, char *base)
// {
// 	int len = ft_strlen(base);
// 	// if (nb == -2147483648)
// 	// 	ft_putstr("-2147483648", i);
// 	if (nb < 0)
// 	{
// 		ft_putchr('-', i);
// 		nb *= -1;
// 	}
// 	if (nb < len)
// 		ft_putchr(base[nb], i);
// 	if (nb >= len)
// 	{
// 		ft_putnbr(nb / len, i);
// 		ft_putnbr(nb % len, i);
// 	}
// }

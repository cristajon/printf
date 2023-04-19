/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 08:28:14 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/04/19 09:35:30 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *i)
{
	if (nb == INT_MIN)
	{
		ft_putstr("-2147483648", i);
		return ;
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

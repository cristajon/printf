/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 08:29:04 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/03/30 17:21:51 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	ft_puthex(unsigned int nb, int *i, char s)
{
	int		p;

	p = 0;
	if (nb <= 9 && nb >= 0)
	{
		nb = nb + 48;
		ft_putchr(nb, i);
	}
	else if (nb >= 10 && nb < 16)
	{
		if (s == 'X')
			ft_putchr(nb - 10 + 'A', i);
		else
			ft_putchr(nb - 10 + 'a', i);
	}
	else if (nb > 15)
	{
		ft_puthex(nb / 16, i, s);
		ft_puthex(nb % 16, i, s);
	}
}
void	ft_putx(unsigned long int nb, int *i, char s)
{
	int		p;

	p = 0;
	if (nb <= 9 && nb >= 0)
	{
		nb = nb + 48;
		ft_putchr(nb, i);
	}
	else if (nb >= 10 && nb < 16)
	{
		if (s == 'X')
			ft_putchr(nb - 10 + 'A', i);
		else
			ft_putchr(nb - 10 + 'a', i);
	}
	else if (nb > 15)
	{
		ft_putx(nb / 16, i, s);
		ft_putx(nb % 16, i, s);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 08:28:20 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/04/19 09:35:34 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *i)
{
	int	p;

	p = 0;
	if (!s)
	{
		ft_putstr("(null)", i);
		return ;
	}
	while (s[p])
	{
		ft_putchr(s[p++], i);
	}
}

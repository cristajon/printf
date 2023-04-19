/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:07:01 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/04/19 10:43:53 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char const	*ft_aux(char const *s, va_list arg, int *i)
{
	if (*s == '%')
	{
		if (*(s + 1) == '%')
			ft_putchr('%', i);
		else if (*(s + 1) == 'c')
			ft_putchr(va_arg(arg, int), i);
		else if (*(s + 1) == 's')
			ft_putstr(va_arg(arg, char *), i);
		else if (*(s + 1) == 'p')
			ft_put(va_arg(arg, unsigned long int), i);
		else if (*(s + 1) == 'i' || *(s + 1) == 'd')
			ft_putnbr(va_arg(arg, int), i);
		else if (*(s + 1) == 'u')
			ft_putuns(va_arg(arg, unsigned int), i);
		else if (*(s + 1) == 'x' || *(s + 1) == 'X')
			ft_puthex(va_arg(arg, unsigned int), i, *(s + 1));
		s += 2;
	}
	return (s);
}

int	ft_printf(char const *s, ...)
{
	int		i;
	va_list	arg;

	va_start(arg, s);
	i = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s != '%' && *s)
			ft_putchr(*s++, &i);
		s = ft_aux(s, arg, &i);
	}
	va_end(arg);
	return (i);
}

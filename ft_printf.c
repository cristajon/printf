/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:07:01 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/03/30 17:25:47 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		if (*s ==  '%')
		{
			if (*(s + 1) == '%')
				ft_putchr('%', &i);
			else if (*(s + 1)  == 'c')
				ft_putchr(va_arg(arg, int), &i);
			else if (*(s + 1)  == 's')
				ft_putstr(va_arg(arg, char *), &i);
			else if (*(s + 1)  == 'p')
				ft_put(va_arg(arg, unsigned long int), &i);
			else if (*(s + 1) == 'i' || *(s + 1)  == 'd')
				ft_putnbr(va_arg(arg, int), &i);
			else if (*(s + 1)  == 'u')
				ft_putuns(va_arg(arg, unsigned int), &i);
			else if (*(s + 1)  == 'x' || *(s + 1)  == 'X')
				ft_puthex(va_arg(arg, unsigned int), &i, *(s+1));
			s += 2;
		}
	}
	va_end(arg);
	return(i);
}

int main()
{
	printf("\001\002\007\v\010\f\r\n");
	printf("MIO\n");
	ft_printf("\001\002\007\v\010\f\r\n");
	return(0);
}
// // algo pasa que me escribe numeros, y no se como hacer para que saltos de linea y \x01\x02\a\v\b\f\r\n me funcionen
// // y en los de ellos no los tienen en cuenta
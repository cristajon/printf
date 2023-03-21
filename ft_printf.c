/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mario <mario@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 12:07:01 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/03/21 14:07:53 by mario            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(char const *s, ...)
{
	int		i;
	int		j;
	va_list	arg;

	va_start(arg, s);
	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] != '%')
		{
			write(1, &s[i], 1);
			i++;
			j++;
		}
		if (s[i] == '%')
			i++;
		if (s[i] == '%')
			write(1, "%", 1);
		if (s[i] == 'c')
			j = ft_putchr(va_arg(arg, int), j);
		else if (s[i] == 's')
			j = ft_putstr(va_arg(arg, char *), j);
		else if (s[i] == 'p')
			j = ft_put(va_arg(arg,  unsigned long int), j);
		else if (s[i] == 'i' || s[i] == 'd')
			j = ft_putnbr(va_arg(arg, long int), j);
		else if (s[i] == 'u')
			j = ft_putnbr(va_arg(arg, int), j);
		else if (s[i] == 'x' || s[i] == 'X')
			j = ft_puthex(va_arg(arg, unsigned long int), j, s[i]);
	i++;
	}
	return (j);
}
int main()
{
	
	ft_printf("%s", "");
	return(0);
}
//no furula d i x X u
#include "printf.h"
int	ft_printf(char const *s, ...)
{
	int		i;
	va_list arg;


	va_start(arg, s);
	i = 0;
	if(!s)
		return (0);
	while(s)
	{
		while(s[i] != '%')
		{
			write(1, &s[i], 1);
			i++;
		}
		if(s[i] == '%')
			i++;
		if(s[i] == 'c')
			i = ft_putchar(va_arg(arg, char), i);
		else if (s[i] == 's')
			i = ft_putchr(va_arg(arg, char *), i);
		else if (s[i] == 'p')
			i = ft_putstr(va_arg(arg, char **), i);
		else if (s[i] == 'd')
			i = ft_putstr(va_arg(arg, int), i);
		else if (s[i] == 'i')
			i = ft_putnbr(va_arg(arg, long int), i);
		else if (s[i] == 'u')
			i = ft_putnbr(va_arg(arg, unsigned long int), i);
		else if (s[i] == 'x')
			i = ft_putnbr(va_arg(arg, long int), i);
		else if (s[i] == 'X')
			i = ft_putnbr(va_arg(arg, char **), i);
		
	}
	return (i);
}
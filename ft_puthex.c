#include	"printf.h"

int ft_let(int n)
{
	int	a;

	a = 0;
	if (n <= 0)
	{
		n = n * -1;
		a++;
	}
	while (n != 0)
	{
		n = n / 10;
		a++;
	}
	return (a);
}

int ft_puthex(unsigned long int nb, int i, char s)
{
	int		b;
	int		p;

	p = 0;
	b = nb;
	if (nb <= 9)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else if (nb >= 10 && nb <= 16)
	{
		if(s == 'X')
			ft_putchr(nb - 10 + 'A', i);
		else
			ft_putchr(nb - 10 + 'a', i);
	}
	else if (nb > 16)
	{
		ft_puthex(nb / 16, i, s);
		ft_puthex(nb % 16, i, s);
	}
	if(nb == 0)
		p = i + ft_let(b);
	return (p);
}

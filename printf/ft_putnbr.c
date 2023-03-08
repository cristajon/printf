#include <unistd.h>

int	ft_intlen(int n)
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

void	ft_putnbr(int nb, int i)
{
	int	a;
	int	p;

	p = i + ft_intlen(nb);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * (-1), i);
	}
	else if (nb <= 9 && nb >= 0)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
	else if (nb > 9)
	{
		a = nb / 10;
		ft_putnbr(a, i);
		nb = nb % 10;
		ft_putnbr(nb, i);
	}
	return (p);
}

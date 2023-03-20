#include "printf.h"
int	ft_putstr(char *s, int i)
{
	int p;

	p = 0;
	while(s[p])
	{
		write(1, &s[p], 1);
		p++;
	}
	i = i + p;
	return (i);
}

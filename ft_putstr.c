#include "printf.h"
int	ft_putstr(char *s, int i)
{
	int p;
	while(s[p])
	{
		write(1, &s[p], 1);
		p++;
	}
	i = i + p;
	return (i);
}

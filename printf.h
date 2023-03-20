# ifndef PRINTFT_H
# define PRINTFT_H

# include <unistd.h>
# include <stdio.h>
# include <strings.h>
# include <ctype.h>
# include <stdlib.h>
# include <limits.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_printf(char const *s, ...);
int		ft_put(unsigned long int s, int i);
int		ft_putchr(char s, int i);
int		ft_puthex(unsigned long int nb, int i, char s);
int		ft_putnbr(int nb, int i);
int		ft_putstr(char *s, int i);

#endif
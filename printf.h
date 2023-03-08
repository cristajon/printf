#ifndef PRINTFT_H
# define PRINTFT_H

# include <unistd.h>
# include <stdio.h>
# include <strings.h>
# include <ctype.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_printf(char const *s, ...);


#endif
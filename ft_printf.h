/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceaizkor <ceaizkor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 08:27:50 by ceaizkor          #+#    #+#             */
/*   Updated: 2023/04/19 10:44:02 by ceaizkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
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

int			ft_printf(char const *s, ...);
void		ft_put(unsigned long int s, int *i);
void		ft_putx(unsigned long int nb, int *i, char s);
void		ft_putchr(char s, int *i);
void		ft_puthex(unsigned int nb, int *i, char s);
void		ft_putnbr(int nb, int *i);
void		ft_putstr(char *s, int *i);
void		ft_putuns(unsigned int nb, int *i);

#endif
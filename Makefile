SRCS	=	ft_printf.c\
			ft_put.c \
			ft_putchr.c \
			ft_puthex.c \
			ft_putnbr.c\
			ft_putstr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= gcc

RM	= rm -f

AR	= ar rc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c  $< -o ${<:.c=.o}

${NAME}:	${OBJS}
				${AR} ${NAME} ${OBJS}
				ranlib ${NAME}

all:		${NAME}

clean:
				${RM} ${OBJS} ${OBJB}

fclean: 	clean
				${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re
SRCS	=	ft_printf(char const *s, ...);
			
OBJS	= ${SRCS:.c=.o}

SRCSB	=	

OBJB	= ${SRCSB:.c=.o}

NAME	= printf.a

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

AR = ar rc

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS} ${OBJB}
				${AR} ${NAME} ${OBJS}
				ranlib ${NAME}

bonus:		${OBJS} ${OBJB}
				${AR}  ${NAME} ${OBJB}
				ranlib ${NAME}

all:		${NAME}

clean:
				${RM} ${OBJS} ${OBJB}

fclean: 	clean
				${RM} ${NAME}

re: 		fclean all bonus

.PHONY:		all clean fclean re
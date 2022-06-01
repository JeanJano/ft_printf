SRCS		= ft_itoa.c ft_itohex.c ft_putnbr_base.c ft_printf.c ft_ft.c ft_ft2.c

OBJS		= ${SRCS:.c=.o}

NAME		= libftprintf.a

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

RM			= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
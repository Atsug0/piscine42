SRCS	= srcs/atoi.c srcs/do-op.c srcs/ft_putnbr.c srcs/signe.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${FLAGS} ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

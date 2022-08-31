SRCS	= src/*.c

NAME	= rush-02

OBJS	= ${SRCS:.c=.o}

HEADERS = includes/ft.h

CC	= gcc

RM	= rm -f

FLAGS	= -Wall -Wextra -Werror 

all :
	${CC} ${FLAGS} -g -I ${HEADERS} ${SRCS} -o ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : re fclean clean all

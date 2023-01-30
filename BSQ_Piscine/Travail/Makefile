CC = cc
FLAG = -Wextra -Werror -Wall 
RM = rm -f

NAME = bsq
SRC = main.c ${wildcard srcs/*.c} ${wildcard read/*.c} ${wildcard algo/*.c}
OBJ = ${SRC:.c=.o}


all : 		${NAME}

.c.o:
			${CC} ${FLAG} -c $< -o ${<:.c=.o}

${NAME}:	${OBJ}
			${CC} -o $@ ${OBJ}

clean:		
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re: 		fclean all

.PHONY:		all clean fclean re	

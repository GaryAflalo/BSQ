##
## EPITECH PROJECT, 2018
## makefilebsq
## File description:
## makefilebsq
##



NAME	=	bsq

SRC	=	src/main.c	\
		src/algo.c	\
		src/compare.c	\
		src/my_strlen.c	\
		lib/my/my_putstr.c	\
		lib/my/my_putchar.c	\
		lib/my/my_getnbr.c

CFLAGS	+=	-Iinclude -W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

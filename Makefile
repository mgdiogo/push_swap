NAME	=	push_swap

CC		=	cc

RM		= rm -f

SRC		= push_swap.c

all:	$(NAME)

$(NAME):
		$(CC) -o $(NAME) $(SRC) $(FLAGS) -fsanitize=address

clean:
		$(RM) $(OBJ)

fclean:
		$(RM) $(NAME)

re:		fclean all
NAME	=	push_swap

RM		=	rm -rf
CC		=	cc
FLAGS	=	-Wall -Werror -Wextra

SRC		=	push_swap.c aux_functions.c list_utils.c fill_stack.c \
			push_op.c swap_op.c rotate_op.c reverse_op.c verifications.c \
			sorts.c

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(SRC) $(FLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
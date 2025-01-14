NAME = pushswap

COMPFLAG = cc -Wall -Werror -Wextra

SRC = push_swap.c \


BONUS =

OBJ = $(SRC:.c=.o)

BONUSOBJ = $(BONUS:.c=.o)

all: $(NAME)

$(OBJ): $(SRC)
		$(COMPFLAG) -c $(SRC)

$(NAME): $(OBJ)
		@make -C libft
		@make -C printf
		$(COMPFLAG) $(SRC) libft/libft.a -o $(NAME)

bonus: $(BONUSOBJ) $(OBJ)
		ar -rc $(NAME) $(BONUSOBJ) $(OBJ)

clean:
		@make clean -C libft
		@make clean -C printf
		rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
		@make fclean -C libft
		@make fclean -C printf
		rm -rf $(NAME)

re: fclean all
		@make re -C libft
		@make re -C printf

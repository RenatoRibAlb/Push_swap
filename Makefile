NAME = pushswap

LIBFT = libft/

LIBFT_A =	$(LIBFT)libft.a

COMPFLAG = cc -g -Wall -Werror -Wextra

SRC = push_swap.c push_swap_utils1.c push_swap_error.c

BONUS =

OBJ = $(SRC:.c=.o)

BONUSOBJ = $(BONUS:.c=.o)

all: $(LIBFT_A) $(NAME)

$(NAME): $(OBJ)
		$(COMPFLAG) $(OBJ) $(LIBFT_A) -o $(NAME)

$(LIBFT_A):
		make -C $(LIBFT)

bonus: $(BONUSOBJ) $(OBJ)
		ar -rc $(NAME) $(BONUSOBJ) $(OBJ)

clean:
		rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
		rm -rf $(OBJ) $(NAME)

re: fclean all

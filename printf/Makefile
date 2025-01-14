# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reribeir <reribeir@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/06 09:20:44 by reribeir          #+#    #+#              #
#    Updated: 2025/01/06 09:21:50 by reribeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf

COMPFLAG = cc -Wall -Werror -Wextra

SRC = ft_printf_utils.c ft_printf.c \


BONUS =

OBJ = $(SRC:.c=.o)

BONUSOBJ = $(BONUS:.c=.o)

all: $(NAME)

$(OBJ): $(SRC)
		$(COMPFLAG) -c $(SRC)

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

bonus: $(BONUSOBJ) $(OBJ)
		ar -rc $(NAME) $(BONUSOBJ) $(OBJ)

clean:
		rm -rf $(OBJ) $(BONUSOBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

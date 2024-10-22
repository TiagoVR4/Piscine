NAME = libft.a

SRC_PATH = srcs
CC = cc
CFlAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = $(addprefix $(SRC_PATH)/, ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:fclean all

.PHONY: all clean fclean re
NAME = megaphone

SRCS =		megaphone.cpp \

OBJ = $(patsubst %.c, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
			$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: fclean all

norm:
			norminette $(SRCS)
			norminette $(INCLUDE)

.PHONY: all clean fclean re
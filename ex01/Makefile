NAME = phone

SRCS =		phonebook.cpp \

OBJ = $(patsubst %.c, %.o, $(SRCS))

CC = clang++

FLAGS = #-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
			#$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(OBJ)

re: fclean all

norm:
			norminette $(SRCS)
			norminette $(INCLUDE)

.PHONY: all clean fclean re
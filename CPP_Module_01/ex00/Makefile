NAME = megaphone

SRCS =		megaphone.cpp \

OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
			$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
			${RM} ${OBJ}

fclean: clean
			$(RM) -rf $(NAME)

re: fclean all

norm:
			norminette $(SRCS)
			norminette $(INCLUDE)
			norminette

.PHONY: all clean fclean re norm
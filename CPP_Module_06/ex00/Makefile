NAME = convert

SRCS =		main.cpp \
			Converter.cpp \

OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = c++

FLAGS = -Wall -Wextra -Werror

INCLUDE =	Converter.hpp \

RM = rm -f

all: $(NAME) $(INCLUDE)

$(NAME): $(OBJ) $(INCLUDE)
			$(CC) $(FLAGS) $(OBJ) -std=c++98 -pedantic -o $(NAME)

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

clean:
			${RM} ${OBJ}

fclean: clean
			$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re norm
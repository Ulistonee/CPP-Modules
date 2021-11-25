NAME = bureaucrat

SRCS =		main.cpp \
			Bureaucrat.cpp

OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror

INCLUDE =	Bureaucrat.hpp

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
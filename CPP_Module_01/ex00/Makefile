NAME = zombie

SRCS =		main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp \


OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror

INCLUDE = Zombie.hpp

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
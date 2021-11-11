NAME = diamondTrap

SRCS =		main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			DiamondTrap.cpp \
			FragTrap.cpp

OBJ = $(patsubst %.cpp, %.o, $(SRCS))

CC = clang++

FLAGS = -Wall -Wextra -Werror -Wshadow

INCLUDE =	ClapTrap.hpp \
			ScavTrap.hpp \
			DiamondTrap.hpp \
			FragTrap.hpp

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
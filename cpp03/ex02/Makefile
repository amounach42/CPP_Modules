NAME = fragTrap
RM = rm -fr
SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp
CFLAGS = -g -Wall -Wextra -Werror -std=c++98
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

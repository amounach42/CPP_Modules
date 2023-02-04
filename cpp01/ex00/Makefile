NAME = Zombie
RM = rm -fr
SRC = Zombie.cpp main.cpp
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp Zombie.hpp 
		@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

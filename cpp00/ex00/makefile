NAME = megaphone
RM = rm -fr
SRC = megaphone.cpp
CFLAGS = -Wall -Wextra -Werror
CC = c++
OBJ = $(SRC:.cpp=.o)
$NAME: $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp megaphone.hpp
		@$(CC) $(CFLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)
fclean: 
	$(RM) $(NAME)
re:
	fclean all
NAME = Bureaucrat
RM = rm -fr
SRC = main.cpp Bureaucrat.cpp
CFLAGS = -g -Wall -Wextra -Werror -std=c++98
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp Bureaucrat.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

NAME = Bureaucrat
RM = rm -fr
SRC = main.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp AForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
CC = c++
OBJ = $(SRC:.cpp=.o)
$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
all: $(NAME)
%.o:%.cpp Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp  RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re:	fclean all

NAME	=	Bureaucrat

RM		=	rm -rf
FILES   =   *_shrubbery
CXX		=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRC		=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(SRC) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(FILES)

re:			fclean all
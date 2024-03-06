NAME	=	Animal

RM		=	rm -rf
CXX		=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRC		=	main.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Cat.cpp Dog.cpp Brain.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(SRC) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
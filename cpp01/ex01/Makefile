NAME	=	zombie

RM		=	rm -rf
CXX		=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRC		=	Zombie.cpp zombieHorde.cpp main.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(SRC) $(CXXFLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
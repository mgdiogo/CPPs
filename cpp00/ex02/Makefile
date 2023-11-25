NAME	=	accounts

RM		=	rm -rf
CXX		=	c++
FLAGS	=	-Wall -Werror -Wextra -g -std=c++98
SRC		=	Account.cpp tests.cpp

OBJ		=	$(SRC:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CXX) $(SRC) $(FLAGS) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
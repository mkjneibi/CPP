NAME		= Scalar
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

FILES		= main Scalar
HEADER		= Scalar.hpp

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:.cpp=.o)

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
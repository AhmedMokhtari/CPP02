NAME = fixed

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = main.o Fixed.o 

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp fixed.hpp
	c++ -c $(CPPFLAGS) $< -o $@

clean : 
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all

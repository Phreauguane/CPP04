NAME	=	animals

CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp		\
			Animal.cpp		\
			Dog.cpp			\
			Cat.cpp			\
			WrongAnimal.cpp \
			WrongCat.cpp

all		:
	$(CPP) $(SRC) -o $(NAME)

clean	:
	rm -f $(NAME)

fclean	:	clean

re		:	fclean all
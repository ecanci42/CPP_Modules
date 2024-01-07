NAME		= phonebook
CC	 		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SOURCE		= main.cpp
RM			= rm -rf

all: 		$(NAME)

$(NAME): 	$(SOURCE)
			$(CC) $(CPPFLAGS) $(SOURCE) -o $(NAME)

clean:
			$(RM) $(NAME)

fclean: 	clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re

NAME		= phonebook
CC	 		= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SOURCE		= main.cpp contact.cpp phonebook.cpp
OBJS		= $(SOURCE:.cpp=.o)
RM			= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

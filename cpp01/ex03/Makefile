NAME			= main
CC				= c++
CPPFLAGS		= -Wall -Werror -Wextra -std=c++98
SOURCE			= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS			= $(SOURCE:.cpp=.o)
RM				= rm -rf

all:			$(NAME)
				
$(NAME):		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:			$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
NAME			= harl
CC				= c++
SRC				= main.cpp Harl.cpp
OBJS			= $(SRC:.cpp=.o)
CPPFLAGS		= -Wall -Werror -Wextra -std=c++98
RM				= rm -rf

all:			$(NAME)

$(NAME):		$(OBJS) $(CC) $(CPPFLAGS) -o $(NAME)

clean:			$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
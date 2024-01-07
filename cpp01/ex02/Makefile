NAME		= brain
CC			= c++
SOURCE		= main.cpp
OBJS		= $(SOURCE:.cpp=.o)
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
RM 			= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
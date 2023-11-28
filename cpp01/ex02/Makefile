NAME			= brain
CC				= c++
CPPFLAGS		= -Wall -Werror -Wextra	-std=c++98
SOURCE			= main.cpp
OBJS			= $(SOURCE:.cpp=.o)
RM				= rm -rf


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:			$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
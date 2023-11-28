NAME			= replace
CC				= c++
CPPFLAGS		= -Wall -Werror -Wextra -std=c++98
SOURCE			= main.cpp Replace.cpp
OBJS			= $(SOURCE:.cpp=.o)
RM				= rm -rf

all:			$(NAME)

$(NAME):		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:			$(RM) $(OBJS)

flcean:			clean
				$(RM)	$(NAME)

re:				flcean all

.PHONY:			all clean fclean re
NAME	=	fixed

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf

SRCS	=	main.cpp Fixed.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@echo "\033[0;33m\nCOMPILATION Fixed\n"
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
		@echo "\033[1;32m\nCOMPILATION REUSSIE\n"


clean:
		@echo "\033[0;31m\nDELETING OBJS\n"
		rm -rf $(OBJS)
		@echo "\033[1;32m\nDONE\n"

fclean: clean
		@echo "\033[0;31m\nDELETING Fixed\n"
		rm -rf $(NAME)
		@echo "\033[1;32m\nDONE\n"

re: fclean all

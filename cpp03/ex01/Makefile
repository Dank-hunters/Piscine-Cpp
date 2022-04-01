NAME = Clappy

SRCS =  main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

COM = c++ -Wall -Wextra -Werror -fsanitize=address -g3  -std=c++98

.cpp.o:
		$(COM) -c $< -o $(<:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
			$(COM) $(OBJS) -o $(NAME)
    
clean:
		rm -f $(OBJS)
    
fclean: clean
		rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re .cpp.o    
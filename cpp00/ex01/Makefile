NAME = Phonebook

SRCS =	PhoneBook.class.cpp\
		Contact.class.cpp 

OBJS = $(SRCS:.cpp=.o)

COM = clang++ -Wall -Wextra -Werror
	
.cpp.o:
	$(COM) -c $< -o $(<:.cpp=.o)

all = $(NAME)

$(NAME) : $(OBJS)
		$(COM) $(OBJS) -o $(NAME)
    
clean:
	rm -f $(OBJS)
    
fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re .cpp.o test
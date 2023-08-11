NAME			= 	phonebook

SOURCE			= 	srcs/phonebook.class.cpp\
					srcs/main.cpp

OBJECT			=	$(SOURCE:.cpp=.o)

COMPILE			= 	g++

FLAGS			= 	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@$(COMPILE) $(FLAGS) $(OBJECT) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
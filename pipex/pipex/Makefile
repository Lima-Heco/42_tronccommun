NAME			= pipex
SRCS			= srcs/main.c
LIBFT_PATH	=	./libs/
LIBFT_FILE	=	libft.a
LIBFT_LIB	=	$(addprefix $(LIBFT_PATH), $(LIBFT_FILE))
OBJS			= $(SRCS:.c=.o)

CC				= gcc -g3
CFLAGS			= -Wall -Werror -Wextra
RM				= rm -f

all:			$(NAME)

lib:
	@echo "\033[1;32m\nCompillation $(LIBFT_PATH)\n"
	@make -C $(LIBFT_PATH)
	@echo "\033[1;32mLIBFT_lib Creer\n"

$(NAME):		lib $(OBJS)
				$(CC) $(OBJS) $(LIBFT_LIB) -o $(NAME)

%.o: %.c
				$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -sC $(LIBFT_PATH)
				$(RM) $(OBJS)

fclean:			clean
				@make fclean -sC $(LIBFT_PATH)
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re


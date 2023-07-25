NAME			= push_swap
SRCS			= srcs/main.c srcs/startpush.c srcs/verif.c srcs/ft_tri.c srcs/ft_printlists.c srcs/tri_a.c srcs/tri_b.c srcs/tri_ab.c \
					srcs/algomain.c srcs/monalgo.c srcs/goodb2a.c srcs/goodb2a03.c \
					srcs/goodb2a4.c srcs/goodb2a5.c srcs/goodb2a6.c srcs/goodrb2a.c srcs/lis.c \
					srcs/utils.c srcs/utils_2.c

LIBFT_PATH	=	./libs/
LIBFT_FILE	=	libft.a
LIBFT_LIB	=	$(addprefix $(LIBFT_PATH), $(LIBFT_FILE))
OBJS			= $(SRCS:.c=.o)

CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
RM				= rm -f

all:			$(NAME)

lib:
	@echo "\033[1;32m\nCompillation $(LIBFT_PATH)\n"
	@make -C $(LIBFT_PATH)
	@echo "\033[1;32mLIBFT_lib Creer\n"

$(NAME):		lib $(OBJS)
				$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) -o $(NAME)

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


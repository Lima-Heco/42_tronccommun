CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEADERS = fd_printf.h
SRCS =  fd_printf.c  ./srcs/fd_pttostr.c ./srcs/fd_putnbru.c ./srcs/fd_putnbr_base.c ./srcs/fd_strlen.c  ./srcs/fd_strrchr.c  ./srcs/fd_putstr_fd.c ./srcs/fd_putnbr_fd.c ./srcs/fd_putchar_fd.c
OBJS = $(SRCS:.c=.o)

NAME = libfdprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS) $(HEADERS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f debug

re: fclean all

debug: CFLAGS += -g
debug: $(OBJS)
	$(CC) $(CFLAGS) -o debug $(OBJS)
	clear
	colour-valgrind --tool=memcheck --leak-check=full --track-origins=yes --error-exitcode=1 ./debug 2>&1

.PHONY: all clean fclean re bonus debug


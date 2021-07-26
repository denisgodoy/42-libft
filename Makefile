NAME := libft.a

CC := clang

CFLAGS := -Wall -Werror -Wextra -fsanitize=address

SRC := ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c \
ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c

OBJ := $(SRC:%.c=%.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	rm -f $@
	ar cq $@ $(OBJ)

clean:	clean
	rm -rf ./a.out
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

ft_atoi:	ft_atoi.c
	$(CC) $(CFLAGS) ft_atoi.c ./main/ft_atoi.c
	./a.out

ft_isalnum:	ft_isalnum.c
	$(CC) $(CFLAGS) ft_isalnum.c ./main/ft_isalnum.c
	./a.out

ft_isalpha:	ft_isalpha.c
	$(CC) $(CFLAGS) ft_isalpha.c ./main/ft_isalpha.c
	./a.out

ft_isascii:	ft_isascii.c
	$(CC) $(CFLAGS) ft_isascii.c ./main/ft_isascii.c
	./a.out

ft_isdigit:	ft_isdigit.c
	$(CC) $(CFLAGS) ft_isdigit.c ./main/ft_isdigit.c
	./a.out

ft_isprint:	ft_isprint.c
	$(CC) $(CFLAGS) ft_isprint.c ./main/ft_isprint.c
	./a.out

ft_strchr:	ft_strchr.c
	$(CC) $(CFLAGS) ft_strchr.c ./main/ft_strchr.c
	./a.out

ft_strlen:	ft_strlen.c
	$(CC) $(CFLAGS) ft_strlen.c ./main/ft_strlen.c
	./a.out

ft_strncmp:	ft_strncmp.c
	$(CC) $(CFLAGS) ft_strncmp.c ./main/ft_strncmp.c
	./a.out

ft_tolower:	ft_tolower.c
	$(CC) $(CFLAGS) ft_tolower.c ./main/ft_tolower.c
	./a.out

ft_toupper:	ft_isprint.c
	$(CC) $(CFLAGS) ft_toupper.c ./main/ft_toupper.c
	./a.out

NAME := libft.a

CC := clang

CFLAGS := -Wall -Werror -Wextra

SRC := ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c 

OBJ := $(SRC:%.c=%.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	rm -f $@$
	ar cq $@ $(OBJ)

clean:	clean
	rm -rf ./a.out
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

ft_atoi:	ft_atoi.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_bzero:	ft_bzero.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_isalnum:	ft_isalnum.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_isalpha:	ft_isalpha.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_isascii:	ft_isascii.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_isdigit:	ft_isdigit.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_isprint:	ft_isprint.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_memchr:	ft_memchr.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_memcpy:	ft_memcpy.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_memmove:	ft_memmove.c
	$(CC) $(CFLAGS) $@.c 
	./a.out

ft_memset:	ft_memset.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_strchr:	ft_strchr.c
	$(CC) $(CFLAGS) $@.c ft_strlen.c
	./a.out

ft_strlcat:	ft_strlcat.c
	$(CC) $(CFLAGS) $@.c ft_strlen.c -lbsd
	./a.out

ft_strlcpy:	ft_strlcpy.c
	$(CC) $(CFLAGS) $@.c ft_strlen.c -lbsd
	./a.out

ft_strlen:	ft_strlen.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_strncmp:	ft_strncmp.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_strrchr:	ft_strrchr.c
	$(CC) $(CFLAGS) $@.c ft_strlen.c
	./a.out

ft_tolower:	ft_tolower.c
	$(CC) $(CFLAGS) $@.c
	./a.out

ft_toupper:	ft_isprint.c
	$(CC) $(CFLAGS) $@.c
	./a.out

NAME = libft.a

CC = clang

CC_FLAGS = -Wall -Werror -Wextra

LIB_FILES = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_toupper.c

LIBOFILES = $(LIB_FILES:%.c=%.o)

all:	$(NAME)
	
$(NAME):	$(LIBOFILES)
	rm -f $@
	ar cq $@ $(LIBOFILES)

clean:	clean
	rm -rf ./a.out
	rm -rf *.o

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

ft_atoi:	ft_atoi.c
	$(CC) $(CC_FLAGS) ft_atoi.c ./main/ft_atoi.c
	./a.out

ft_isalnum:	ft_isalnum.c
	$(CC) $(CC_FLAGS) ft_isalnum.c ./main/ft_isalnum.c
	./a.out

ft_isalpha:	ft_isalpha.c
	$(CC) $(CC_FLAGS) ft_isalpha.c ./main/ft_isalpha.c
	./a.out

ft_isascii:	ft_isascii.c
	$(CC) $(CC_FLAGS) ft_isascii.c ./main/ft_isascii.c
	./a.out

ft_isdigit:	ft_isdigit.c
	$(CC) $(CC_FLAGS) ft_isdigit.c ./main/ft_isdigit.c
	./a.out

ft_isprint:	ft_isprint.c
	$(CC) $(CC_FLAGS) ft_isprint.c ./main/ft_isprint.c
	./a.out

ft_strchr:	ft_isstrchr.c
	$(CC) $(CC_FLAGS) ft_strchr.c ./main/ft_strchr.c
	./a.out

ft_strlen:	ft_strlen.c
	$(CC) $(CC_FLAGS) ft_strlen.c ./main/ft_strlen.c
	./a.out

ft_strncmp:	ft_strncmp.c
	$(CC) $(CC_FLAGS) ft_strncmp.c ./main/ft_strncmp.c
	./a.out

ft_tolowert:	ft_tolower.c
	$(CC) $(CC_FLAGS) ft_tolower.c ./main/ft_tolower.c
	./a.out

ft_toupper:	ft_isprint.c
	$(CC) $(CC_FLAGS) ft_toupper.c ./main/ft_toupper.c
	./a.out
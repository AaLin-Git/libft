CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a
SRC = *.c
DEST = $(SRC:.c=.o)

make:
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

all: $(NAME)

$(NAME) : $(DEST)
	ar rcs $(NAME) $(DEST)

clean :
	$(RM) $(DEST)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re

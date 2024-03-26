NAME = libftprintf.a

SOURCES = ft_printf.c src/ft_printfc.c src/ft_printfi.c src/ft_strlen.c \
		src/ft_printfi.c src/ft_printfstr.c src/ft_printfp.c src/ft_printfxx.c \
		src/ft_printfu.c \

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

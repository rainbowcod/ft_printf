NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c hexconvert.c ptrconvert.c \
		ft_unsignedputnbr.c

LIBFT = ./Libft/libft.a


OBJCS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME)

$(NAME): $(OBJCS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJCS)

$(LIBFT) :
	make -C ./libft

clean:
	$(RM) $(OBJCS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

party:
	curl parrot.live

.PHONY: all clean fclean re party

# Linux and Mac
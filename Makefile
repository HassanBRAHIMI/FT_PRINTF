SRCS = ft_printf.c \
	   ft_putstr.c \
	   ft_putadress.c \
	   ft_putuhexa.c \
	   ft_putchar.c	\
	   ft_putunsigned.c \
	   ft_putlhexa.c \
	   ft_putnbr.c

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

ARCHIVE = ar rcs

CC = cc

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(ARCHIVE) $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

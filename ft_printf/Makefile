NAME = libftprintf.a

CFLGS = -Wall -Wextra -Werror

CC = cc

SRCS = ft_putchar.c ft_printf.c ft_strlen1.c ft_putstr1.c ft_putnbr.c ft_putnbrhex.c ft_putnbrha.c ft_putp.c ft_putunbr.c


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLGS) -c $<

clean :
	rm -rf $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
	@make fclean -C printf

.PHONY:all clean fclean re

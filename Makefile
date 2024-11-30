CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rcs
RM = rm -f

SRC = ft_check_args.c ft_print_hexa.c ft_print_ptr.c ft_printf.c ft_putchar.c\
ft_putstr.c ft_unsigned_putnbr.c ft_putnbr.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME) : $(OBJ) ft_printf.h
		$(AR) $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re: fclean all clean re
.PHONY: clean fclean re all
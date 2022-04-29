NAME	= libftprintf.a
SRCS	=	ft_printf.c ft_put_c.c ft_put_s.c ft_put_p.c\
			ft_put_di.c ft_put_u.c ft_put_lower_x.c ft_put_upper_x.c
HEADER	= ./ft_printf.h
OBJS	= $(SRCS:.c=.o)
CC		= gcc
CFLAG	= -Wall -Wextra -Werror
AR		= ar rcs

all:		$(NAME)

.c.o:
			$(CC) $(CFLAG) -I $(HEADER) -c $< -o $@

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME) 

re:			fclean all

.PHONY:		all clean fclean re
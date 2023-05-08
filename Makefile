NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = libft.h
AR = ar rcs
SRC =  $(wildcard ./*.c)
	
		  
OBJS = $(SRC:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(AR) $@ $^

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
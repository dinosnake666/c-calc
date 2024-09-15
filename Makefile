NAME = c-calc

SRC_DIR = source

SOURCES = $(wildcard $(SRC_DIR)/*/*.c)

OBJS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

c-calc:$(OBJS)
	cc $(CFLAGS) $(OBJS) -o c-calc

all: c-calc

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re

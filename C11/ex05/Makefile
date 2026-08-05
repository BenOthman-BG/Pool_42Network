NAME = do-op
CC = cc
FLAGS = -Wall -Werror -Wextra
VPATH = $(SRCS_DIR)
SRCS_DIR = srcs
INC_DIR = inc
SRCS = $(SRCS_DIR)/main.c $(SRCS_DIR)/ft_atoi.c $(SRCS_DIR)/ft_putnbr.c $(SRCS_DIR)/operations.c
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -I$(INC_DIR) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re

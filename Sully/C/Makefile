NAME := Sully
CC := clang
CFLAGS := -Wextra -Wall -Werror -g

OBJS_DIR := obj
SRCS := Sully.c
OBJS    := $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1m\033[32mCompiling\033[0m" $@
	@echo "\033[42mSuccessfully compiled :)\033[0m"

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)
	@rm -rf Sully_*

re: fclean all

.PHONY: all clean fclean re
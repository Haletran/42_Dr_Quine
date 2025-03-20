NAME := Colleen
CC := clang
CFLAGS := -Wextra -Wall -Werror -g

OBJS_DIR := obj
SRCS := $(shell find -name "*.c")
OBJS    := $(addprefix $(OBJS_DIR)/,$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[1m\033[32mCompiling\033[0m" $@
	@echo "\033[42mSuccessfully compiled :)\033[0m"

$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

diff: re
	@echo "----------------"
	@./Colleen > tmp_Colleen
	@if diff tmp_Colleen Colleen.c; then \
		echo "Diff \033[1m\033[32mOK\033[0m"; \
	else \
		echo "Diff \033[1m\033[31mKO\033[0m"; \
	fi
	@rm tmp_Colleen

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
# Makefile para push_swap e checker (bonus) com geração de .o

NAME        := push_swap
CHECKER     := checker
LIBFT_DIR   := libft
LIBFT       := $(LIBFT_DIR)/libft.a
CC          := cc
CFLAGS      := -Wall -Wextra -Werror

# Fontes e objetos do push_swap
SRCS_PUSH_SWAP := \
	push_swap_main.c \
	print_ops.c \
	operations1.c \
	operations2.c \
	operations3.c \
	sorting.c \
	sorting_small.c \
	chunk_sort.c \
	utils.c

OBJS_PUSH_SWAP := $(SRCS_PUSH_SWAP:.c=.o)

# Fontes e objetos do checker (bonus)
SRCS_CHECKER := \
	checker_main_bonus.c \
	bonus_parsing.c \
	operations1.c \
	operations2.c \
	operations3.c \
	utils.c

OBJS_CHECKER := $(SRCS_CHECKER:.c=.o)

.PHONY: all bonus clean fclean re

all: $(NAME)

# Compila libft se necessário
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Gera os .o a partir dos .c
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Linka o push_swap
$(NAME): $(OBJS_PUSH_SWAP) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $(OBJS_PUSH_SWAP) $(LIBFT)

# Linka o checker (bonus)
checker: $(OBJS_CHECKER) $(LIBFT)
	$(CC) $(CFLAGS) -o $(CHECKER) $(OBJS_CHECKER) $(LIBFT)

bonus: checker

clean:
	# remove todos os .o do projeto
	rm -f $(OBJS_PUSH_SWAP) $(OBJS_CHECKER)
	# delega clean na libft
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	# remove executáveis
	rm -f $(NAME) $(CHECKER)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror 
INCLUDES = -Iincludes -Ift_printf -Ilibft

LIBFT = libft/libft.a
LIBFT_PRINTF = ft_printf/libftprintf.a

HEADERS = includes/push_swap.h

COMMON_SRCS = srcs/parsing/init_stacks.c \
             srcs/parsing/input_validation.c \
             srcs/parsing/utils_parsing.c \
             srcs/algorithm/sort_small.c \
             srcs/algorithm/sort_big.c \
             srcs/algorithm/sort_utils.c \
             srcs/algorithm/sort_utils1.c \
             srcs/operations/push_ops.c \
             srcs/operations/rotate_ops.c \
             srcs/operations/rrotate_ops.c \
             srcs/operations/swap_ops.c

MAIN_SRCS = srcs/main.c

COMMON_OBJS = $(COMMON_SRCS:.c=.o)
MAIN_OBJS = $(MAIN_SRCS:.c=.o)

all: libs $(NAME)

$(NAME): $(COMMON_OBJS) $(MAIN_OBJS) $(LIBFT) $(LIBFT_PRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(COMMON_OBJS) $(MAIN_OBJS) $(LIBFT) $(LIBFT_PRINTF)

libs:
	make -C libft
	make -C ft_printf

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	make -C libft clean
	make -C ft_printf clean
	rm -f $(COMMON_OBJS) $(MAIN_OBJS)

fclean: clean
	make -C libft fclean
	make -C ft_printf fclean
	rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-houa <mel-houa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 20:26:38 by mel-houa          #+#    #+#              #
#    Updated: 2025/04/11 20:26:39 by mel-houa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = cc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_isdigit.c ft_memchr.c ft_putendl_fd.c ft_striteri.c ft_strncmp.c \
	ft_bzero.c ft_isprint.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c \
	ft_calloc.c ft_itoa.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c \
	ft_isalnum.c ft_memmove.c ft_split.c ft_strlcpy.c ft_strtrim.c \
	ft_isalpha.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
	ft_isascii.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_toupper.c ft_tolower.c \
	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) -rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
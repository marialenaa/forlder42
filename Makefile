# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgallizz <mgallizz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 16:09:02 by mgallizz          #+#    #+#              #
#    Updated: 2020/12/11 15:20:43 by mgallizz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang

CFLAGS = -Wall -Werror -Wextra -I. -c

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memccpy.c \
ft_memmove.c ft_memcmp.c ft_memset.c ft_strlen.c ft_strdup.c ft_strlcat.c \
ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strdup.c \
ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_toupper.c ft_tolower.c ft_calloc.c ft_strtrim.c ft_substr.c ft_strjoin.c \
ft_strmapi.c ft_split.c ft_itoa.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re



# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: evaz <evaz@student.42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 18:43:42 by evaz              #+#    #+#              #
#    Updated: 2021/12/09 18:43:42 by evaz             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h

SOURCES = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
			ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c \
			ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_isalnum.c ft_strrchr.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
			ft_lstiter.c ft_lstmap.c


CC = gcc
CFLAGS = -c -Wall -Werror -Wextra

OBJECTS = $(SOURCES:.c=.o)
OBJECTSBONUS = $(BONUS:.c=.o)

%.o: %.c
	$(CC) -I. -c $(CFLAGS) $< -o $@

$(NAME): $(OBJECTS)
		ar -cr $(NAME) $(OBJECTS)

all: $(NAME)

bonus: $(OBJECTS) $(OBJECTSBONUS)
		ar -cr $(NAME) $(OBJECTS) $(OBJECTSBONUS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
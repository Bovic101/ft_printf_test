# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 19:07:04 by vodebunm          #+#    #+#              #
#    Updated: 2024/02/13 03:58:32 by vodebunm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Library Name
NAME = libft.a
CC = gcc

# List of source files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strjoin.c \
			ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c ft_putstr ft_undigitlen_base ft_digitlen_base \
			ft_str_toupper \
			
OBJS = $(SRCS:.c=.o)

#List of Bonus file
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

RM 		= rm -f

# All Rules
# Rule to make the library
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) 
	rm -f $(BONUS_OBJS)

# Rule to clean everything
fclean: 
	$(MAKE) clean
	rm -f $(NAME)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re bonus
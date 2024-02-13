# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 03:02:11 by vodebunm          #+#    #+#              #
#    Updated: 2024/02/13 05:49:39 by vodebunm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name
NAME = libftprintf.a
CC = gcc
# List of source files
SRCS = ft_characater_printf.c \
	ft_printf/ft_conversion_specifier.c \
	ft_printf/ft_hexaconvert_pointer.c \
	ft_printf/ft_hexaconvert_printf.c \
	ft_printf/ft_hexaconvert_up_printf.c \
	ft_printf/ft_int_dec_number_print.c \
	ft_printf/ft_pointer_printf.c \
	ft_printf/ft_printf.c \
	ft_printf/ft_str_printf.c \
	
OBJ_DEST = mv *.o ft_printf
OBJS = $(SRCS:.c=.o)

#List of Bonus file

CFLAGS = -Wall -Wextra -Werror

RM 		= rm -f

# All Rules
# Rule to make the library
all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	$(OBJ_DEST)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS) 

# Rule to clean everything
fclean: 
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 03:02:11 by vodebunm          #+#    #+#              #
#    Updated: 2024/02/14 01:06:37 by vodebunm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name
NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./Libft
RM = rm -f

# List of source files
SRCS = ft_characater_printf.c ft_conversion_specifier.c ft_hexaconvert_pointer.c ft_hexaconvert_printf.c \
			ft_hexaconvert_up_printf.c ft_int_dec_number_print.c ft_pointer_printf.c ft_printf.c ft_str_printf.c \

OBJS = $(SRCS:.c=.o)

# All Rules
# Rule to make the library
all: $(NAME)

makelibft:
		@make -C $(LIBFTDIR)
		@cp $(LIBFTDIR)/$(LIBFTNAME)
		@mv $(LIBFTNAME) $(NAME)
$(NAME): makelibft $(OBJS)
		@ar -r $(NAME) $(OBJS)
		
clean:
	@cd $(LIBFTDIR) && make clean
	@rm -f $(OBJS) 

# Rule to clean everything
fclean: 
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re
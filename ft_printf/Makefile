# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 03:02:11 by vodebunm          #+#    #+#              #
#    Updated: 2024/02/17 03:38:57 by vodebunm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library Name
NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -Iheaders -I . -c
LIBFTDIR = ./libft
OBJDIR = ./ft_printf
RM = rm -f


# List of source files
SRCS = ft_characater_printf.c ft_conversion_specifier.c ft_calculate_digit_base.c\
			ft_int_dec_number_print.c ft_pointer_printf.c ft_printf.c ft_str_printf.c \

OBJ_DEST = mv *.o $(OBJDIR)

OBJS = $(SRCS:.c=.o)

# All Rules
# Rule to make the library
all: $(NAME)

$(NAME): makelibft
		$(CC) $(CFLAGS) $(SRCS)
		$(OBJ_DEST)
		@ar -rcs $@ $(OBJS)

makelibft:
		$(MAKE) clean -C $(LIBFTDIR)
		$(RM) -r $(OBJDIR)

clean:
	$(MAKE) clean -C $(LIBFTDIR)
	@$(RM) $(addprefix $(OBJDIR)/, $(OBJS))

# Rule to clean everything
fclean: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(NAME)

# Rule to recompile
re: fclean all

# Phony targets
.PHONY: all clean fclean re
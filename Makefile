# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 18:11:46 by rmorais           #+#    #+#              #
#    Updated: 2022/11/14 21:38:16 by rmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ftprintf.a

SRC = ft_printf 
CC = gcc
RM = rm -f
AR = ar rcs

ALL: $(NAME)
$(NAME) : $(SRC:=)
	@$(AR) $(NAME) $(SRC:=.o)
clean: 
	@$(RM)	$(SRC:=.o)
fclean: clean
	@$(RM) -f $(NAME)
re: fclean all

.PHONY:		all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbrauer <pbrauer@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 14:37:34 by pbrauer           #+#    #+#              #
#    Updated: 2023/02/26 14:37:36 by pbrauer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
CCFLAGS = -Wall -Werror -Wextra

NAME = rush-02
SRC = main.c helper_ft1.c helper_ft2.c error_numbers.c file_read_open.c ft_convert_nb.c write_nb_in_2digits.c write_nb_into_ltrs.c
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.c ourlib.h
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	
fclean:	clean
	rm -f $(NAME)

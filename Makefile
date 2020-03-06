# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edbarbos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 20:53:39 by edbarbos          #+#    #+#              #
#    Updated: 2020/01/21 21:15:56 by edbarbos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c
OBJS = *.o
CPARAMS = -c
CFLAGS = -Wall -Werror -Wextra
CC = gcc
AR = ar
ARPARAMS = -rc

all: $(NAME)

$(NAME):
	$(CC) $(CPARAMS) $(CFLAGS) $(SRCS)
	$(AR) $(ARPARAMS) $(NAME) $(OBJS)

bonus:	$(NAME)

noflags:
	$(CC) $(CPARAMS) $(SRCS)
	$(AR) $(ARPARAMS) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
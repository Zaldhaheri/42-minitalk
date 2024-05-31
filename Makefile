# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/30 21:10:37 by zaldhahe          #+#    #+#              #
#    Updated: 2024/05/31 20:36:11 by zaldhahe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src = server.c minitalk_utils.c client.c

SERVER = server.c

CLIENT = client.c

SERVER_NAME = server

CLIENT_NAME = client

OBJ = $(SRC:.c=.=o)

CC = cc

#NAME = minitalk.a

CFLAGS = -Wall -Werror -Wextra

all: $(CLIENT_NAME) $(SERVER_NAME)

$(SERVER_NAME) : $(SERVER) $(OBJ)
	$(CC) $(CFLAGS) minitalk_utils.c $(SERVER) -o $(SERVER_NAME)

$(CLIENT_NAME) : $(CLIENT) $(OBJ)
	$(CC) $(CFLAGS) minitalk_utils.c $(CLIENT) -o $(CLIENT_NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(SERVER_NAME) $(CLIENT_NAME)

re: fclean all

.PHONY: all clean fclean all
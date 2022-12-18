# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 13:56:52 by yrabby            #+#    #+#              #
#    Updated: 2022/12/18 14:04:15 by yrabby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 					= megaphone

# src
SRC_DIR					= ./
SRC_NAME				= main.cpp PhoneBook.cpp Contact.cpp Reader.cpp
SRC						= $(addprefix $(SRC_DIR)/, $(SRC_NAME))

# head
HEAD_DIR				= ./
HEAD_NAME				= PhoneBook.hpp Contact.hpp Reader.hpp
HEAD					= $(addprefix $(HEAD_DIR)/, $(HEAD_NAME))

# obj
OBJ_DIR					= ./
OBJ						= $(SRC:.cpp=.o)

# flags
CC 						= c++
CFLAGS 					= -c -Wall -Wextra -Werror -std=c++98 -pedantic -I $(HEAD_DIR)

# implicit rules
$(addprefix $(OBJ_DIR)/, %.o): $(addprefix $(SRC_DIR)/, %.cpp) $(HEAD)
	$(CC) $(CFLAGS) $< -o $(@)

# rules
.PHONY: clean fclean re all

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all



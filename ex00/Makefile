# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoav <yoav@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 12:58:41 by yoav              #+#    #+#              #
#    Updated: 2022/11/15 13:05:30 by yoav             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 					= megaphone

# src
SRC_DIR					= ./
SRC						= megaphone.cpp

# obj
OBJ_DIR					= ./
OBJ						= $(SRC:.cpp=.o)

# flags
CC 						= c++
CFLAGS 					= -c -Wall -Wextra -Werror

# implicit rules
$(addprefix $(OBJ_DIR)/, %.o): $(addprefix $(SRC_DIR)/, %.cpp)
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



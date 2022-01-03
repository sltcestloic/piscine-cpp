# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbertran <lbertran@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 16:40:32 by lbertran          #+#    #+#              #
#    Updated: 2022/01/03 13:56:31 by lbertran         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp \
			Animal.cpp \
			Dog.cpp \
			Cat.cpp \
			Brain.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= animal
CC		= clang++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -Wshadow -std=c++98

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}
	
all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
	
.PHONY: all clean fclean re

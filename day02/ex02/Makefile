# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbertran <lbertran@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 16:40:32 by lbertran          #+#    #+#              #
#    Updated: 2021/11/25 11:11:20 by lbertran         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp \
			Fixed.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= fixed
CC		= clang++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

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

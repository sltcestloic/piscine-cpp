# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbertran <lbertran@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 16:40:32 by lbertran          #+#    #+#              #
#    Updated: 2021/09/14 14:01:19 by lbertran         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= megaphone.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= megaphone
CC		= clang++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

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

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbertran <lbertran@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 16:40:32 by lbertran          #+#    #+#              #
#    Updated: 2021/10/29 08:40:40 by lbertran         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp
OBJS	= ${SRCS:.cpp=.o}
NAME	= brain
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

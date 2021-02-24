# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mizola <mizola@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/01 09:16:47 by mizola            #+#    #+#              #
#    Updated: 2020/11/19 05:25:01 by mizola           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_NAME = serverV1
SERVER_SRC = webserv.cpp
SERVER_0SRC = $(SERVER_SRC:.cpp=.o)

FLAGS =		clang++ -Wall -Wextra -Werror

all:		$(SERVER_NAME)

$(SERVER_NAME):	$(SERVER_0SRC)
			$(FLAGS) $(SERVER_0SRC) -o $(SERVER_NAME)

%.o:		%.cpp
			$(FLAGS) -c $< -o $@

clean:
			rm -rf  $(SERVER_0SRC)

fclean:		clean
			rm -rf $(SERVER_NAME)

re:			fclean all

s:
			wc *.cpp *.h *.hpp

.PHONY:		all clean fclean re s server
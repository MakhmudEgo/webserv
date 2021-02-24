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

server:
			make -C Server
			mv Server/serverV1 ./

clean:
			make -C Server clean
			rm -rf  *.o

fclean:		clean
			rm -rf serverV1 a.out

s:
			wc *.cpp *.h *.hpp

.PHONY:		all clean fclean re s server
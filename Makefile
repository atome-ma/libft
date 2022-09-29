# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atome-ma <atome-ma@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 19:45:15 by atome-ma          #+#    #+#              #
#    Updated: 2022/09/29 21:20:28 by atome-ma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
CFLAGS		= -Werror -Wall -Wextra
RM			= rm -f
SRCS		= ft_isalnum.c  \
              ft_isalpha.c  \
			  ft_isascii.c  \
			  ft_isdigit.c  \
			  ft_isprint.c  \
			  ft_strlen.c   \
			  ft_tolower.c  \
			  ft_toupper.c  \
			  ft_atoi.c     \
 			  ft_strchr.c   \
			  ft_strrchr.c  \
			  ft_memset.c   \
			  ft_bzero.c    \
			  ft_memcpy.c   \
			  ft_memmove.c  \
			  ft_strlcpy.c  \
			
			  
OBJS		= ${SRCS:.c=.o}

${NAME}	:
			${CC} -c ${CFLAGS} ${SRCS} 
			ar crs ${NAME} ${OBJS}

all		:	${NAME}

clean	:
		${RM} ${OBJS}
	
fclean	:	clean
		${RM} ${NAME}

re		:	fclean all

.PHONY: all clean fclean re
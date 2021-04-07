# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoreilh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/24 13:41:36 by tmoreilh          #+#    #+#              #
#    Updated: 2021/04/07 14:05:14 by tmoreilh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_split.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c ft_memmove.c ft_atoi.c ft_memchr.c ft_memccpy.c ft_memcmp.c ft_calloc.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
CC= gcc
FLAGS= -Wall -Werror -Wextra
BONUS_OBJ= $(BONUS:.c=.o)
.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
OBJ= $(SRC:.c=.o)
all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
bonus: $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $(OBJ) $(BONUS_OBJ)
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

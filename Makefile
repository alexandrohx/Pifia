# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aliang-h <aliang-h@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 11:01:52 by aliang-h          #+#    #+#              #
#    Updated: 2024/06/07 13:14:47 by aliang-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c	ft_bzero.c	ft_calloc.c	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_memcpy.c	ft_memchr.c	ft_memmove.c	ft_memset.c	ft_strchr.c	ft_strdup.c	ft_strlcat.c	ft_strlcpy.c	ft_strlen.c	ft_strncmp.c	ft_strnstr.c	ft_strrchr.c	ft_tolower.c	ft_toupper.c	ft_strjoin.c	ft_strtrim.c	ft_substr.c	ft_strmapi.c	ft_split.c	ft_itoa.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	ft_striteri.c

BONUS_FILE = ft_lstnew_bonus.c	ft_lstsize_bonus.c	ft_lstmap_bonus.c	ft_lstlast_bonus.c	ft_lstiter_bonus.c	ft_lstdelone_bonus.c	ft_lstclear_bonus.c	ft_lstadd_front_bonus.c	ft_lstadd_back_bonus.c

OBJ = $(FILES:.c=.o)

BONUS_OBJ = $(BONUS_FILE:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS) $(OBJ)
	@clang -c $(FLAGS) $(FILES)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

bonus: $(BONUS_OBJ)
	@clang -c $(FLAGS) $(BONUS_FILE)
	@ar rcs $(NAME) $(BONUS_OBJ)
	@echo "Bonus library $(NAME) created!"

clean:
	rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME) $(OBJ)
	@rm -f $(NAME) $(BONUS_OBJ)

re:	fclean all 

$(OBJ): %.o: %.c
	@clang -c $(FLAGS) $< -o $@

.PHONY:	all clean fclean re bonus



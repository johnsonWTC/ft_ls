# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mxaba <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 10:40:54 by mxaba             #+#    #+#              #
#    Updated: 2018/09/17 18:20:41 by jdubula          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	ft_ls

SRC		 =	libft/main.c libft/aff_l.c libft/sort_file.c libft/command_list.c libft/dir_cpy.c\
			libft/file_list.c libft/ft_ls.c libft/other_command.c libft/parsing.c libft/read_a_dir.c libft/rec_ls.c\
			libft/help_menu.c libft/time_add.c libft/aff_l_second.c libft/check_and_sort.c libft/sort_dir.c libft/display_ls.c\
			libft/size_and_link.c libft/path_name.c libft/colours/color.c

OBJ		=	$(SRC:.c=.o)

GCCF 	= 	-Wall -Werror -Wextra

all		:	$(NAME)

$(NAME)	: 	$(OBJ) 
			make -C libft
			gcc -o $(NAME) $(OBJ) -L libft -lft

%.o: %.c libft/libft.h
			gcc -c -I libft $< -o $@

.PHONY	:	clean fclean re

clean:
			make -C libft fclean
			@rm -rf $(OBJ)

fclean	: 	clean
			@rm -rf $(NAME)

re		: 	fclean all

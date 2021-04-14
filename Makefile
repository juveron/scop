# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juveron <juveron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/17 12:11:43 by juveron           #+#    #+#              #
#    Updated: 2021/03/29 11:17:07 by juveron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scop

CC = clang

FLAGS = -Wall -Werror -Wextra

SRCSDIR = srcs/

SRCS = error_handler.c initialization.c generate_gl_objs.c main.c rotation_and_translation.c set_model_pos_infos.c parser.c get_shader.c data_storer.c get_texture.c tools.c events.c

SRCPATH = $(addprefix $(SRCSDIR), $(SRCS))

OBJECT = $(SRCPATH:.c=.o)

HEADER = .

INCLUDE = includes/scop.h

LIBFT = libft/libft.a

GLFW_LIB = `pkg-config --static --libs glfw3` -framework OpenGL
GLFW_INC = `pkg-config --cflags-only-I glfw3`


all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C libft

macOS:
	brew install glfw

linuxDist:
	sudo apt-get install glfw

%.o: %.c $(INCLUDE)
	$(CC) -o $@ -c $< $(FLAGS) -I$(HEADER)

$(NAME): $(OBJECT)
	$(CC) $(FLAGS) $(LIBFT) $(OBJECT) -o $(NAME) $(GLFW_LIB) $(GLFW_INC)

debug:
	$(CC) -g -o debug $(SRCS) -I$(HEADER) -I libft/ -L libft/ -lft -lm -L $(GLFW_LIB) $(GLFW_INC)

clean:
	/bin/rm -rf $(OBJECT)
	@make clean -C libft

fclean: clean
	/bin/rm -rf $(NAME)
	@make fclean -C libft

re: fclean all

.PHONY: all debug clean fclean re macOS linuxDist



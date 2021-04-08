# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juveron <juveron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/05 16:22:48 by juveron           #+#    #+#              #
#    Updated: 2021/03/29 11:00:45 by juveron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

ifdef COUNT
T := $(shell $(MAKE) $(NAME) --no-print-directory \
      -nrR \
      PROGRESS="COUNTTHIS" | grep -c "COUNTTHIS")
N := x
C = $(words $N)$(eval N := x $N)
PROGRESS = [`expr $C '*' 100 / $T`%%]
endif

# libft

LFT_SRCDIR := srcs/

LFT_HDRDIR := hdrs/

LFT_INTERNAL_HDRDIR := internal/

LFT_INTERNAL_HDRS:=	libft_map_internal.h		\
					libft_str_internal.h		\
					libft_vector_internal.h

LFT_INTERNAL_HDRS := $(addprefix $(LFT_INTERNAL_HDRDIR),$(LFT_INTERNAL_HDRS))

LFT_HDRS :=	$(LFT_INTERNAL_HDRS)				\
			libft.h								\
			libft_bitsize.h						\
			libft_conv.h						\
			libft_vector.h						\
			libft_gnl.h							\
			libft_io.h							\
			libft_lst.h							\
			libft_map.h							\
			libft_math.h						\
			libft_mem.h							\
			libft_str.h							\

LFT_HDRS := $(addprefix $(LFT_HDRDIR),$(LFT_HDRS))

SRCDIR_CLOCK := clock/

SRCDIR_CONV := conv/

SRCDIR_VECTOR := vector/

SRCDIR_GNL := gnl/

SRCDIR_IO := io/

SRCDIR_LST := lst/

SRCDIR_MAP := map/

SRCDIR_MATH := math/

SRCDIR_MATH_VEC := vec/

SRCDIR_MEM := mem/

SRCDIR_STR := str/

LFT_OBJDIR := objs/

LFT_OBJDIRS :=	$(LFT_OBJDIR)									\
				$(LFT_OBJDIR)$(SRCDIR_CLOCK)					\
				$(LFT_OBJDIR)$(SRCDIR_CONV)						\
				$(LFT_OBJDIR)$(SRCDIR_VECTOR)					\
				$(LFT_OBJDIR)$(SRCDIR_GNL)						\
				$(LFT_OBJDIR)$(SRCDIR_IO)						\
				$(LFT_OBJDIR)$(SRCDIR_LST)						\
				$(LFT_OBJDIR)$(SRCDIR_MAP)						\
				$(LFT_OBJDIR)$(SRCDIR_MATH)						\
				$(LFT_OBJDIR)$(SRCDIR_MATH)$(SRCDIR_MATH_VEC)	\
				$(LFT_OBJDIR)$(SRCDIR_MEM)						\
				$(LFT_OBJDIR)$(SRCDIR_STR)

SRC_CLOCK :=	clock_p2.c	\
				clock.c

SRCPATH_CLOCK := $(addprefix $(SRCDIR_CLOCK), $(SRC_CLOCK))

SRC_CONV :=	ft_atof.c		\
			ft_atoi.c		\
			ft_atol.c		\
			ft_itoa.c		\
			ft_uitoa_base.c

SRCPATH_CONV := $(addprefix $(SRCDIR_CONV), $(SRC_CONV))

SRC_VECTOR :=	vector_p2.c	\
				vector_p3.c	\
				vector_p4.c	\
				vector.c

SRCPATH_VECTOR := $(addprefix $(SRCDIR_VECTOR), $(SRC_VECTOR))

SRC_GNL :=	get_next_line.c

SRCPATH_GNL := $(addprefix $(SRCDIR_GNL), $(SRC_GNL))

SRC_IO :=	ft_putchar_fd.c	\
			ft_putchar.c	\
			ft_putendl_fd.c	\
			ft_putendl.c	\
			ft_putnbr_fd.c	\
			ft_putnbr.c		\
			ft_putnstr_fd.c	\
			ft_putnstr.c	\
			ft_putnwstr_fd.c\
			ft_putnwstr.c	\
			ft_putstr_fd.c	\
			ft_putstr.c		\
			ft_putwchar_fd.c\
			ft_putwchar.c	\
			ft_putwstr_fd.c	\
			ft_putwstr.c

SRCPATH_IO := $(addprefix $(SRCDIR_IO), $(SRC_IO))

SRC_LST :=	ft_dlist_create.c	\
			ft_dlist_index.c	\
			ft_dlist_insert.c	\
			ft_dlistaddend.c	\
			ft_dlistaddfront.c	\
			ft_dlistdel.c		\
			ft_dlistdelone.c	\
			ft_dlistnew.c		\
			ft_lstadd.c			\
			ft_lstaddend.c		\
			ft_lstdel.c			\
			ft_lstdelone.c		\
			ft_lstiter.c		\
			ft_lstmap.c			\
			ft_lstnew.c

SRCPATH_LST := $(addprefix $(SRCDIR_LST), $(SRC_LST))

SRC_MAP :=	map_p2.c	\
			map_p3.c	\
			map.c

SRCPATH_MAP := $(addprefix $(SRCDIR_MAP), $(SRC_MAP))

SRC_MATH :=	clamp.c		\
			ft_pow.c	\
			lerp.c		\
			log2.c		\
			log10.c		\
			max.c		\
			min.c		\
			radian.c	\
			vec2.c		\
			vec2f.c		\
			mat_copy.c	\
			mat_mul.c	\
			mat_projection.c	\
			mat_rotate.c	\
			mat_scale.c		\
			mat_translate.c	\
			new_mat.c		\
			new_vec.c		\

SRCPATH_MATH := $(addprefix $(SRCDIR_MATH), $(SRC_MATH))

SRC_MATH_VEC :=	vec2_add.c			\
				vec2_cross.c		\
				vec2_dist_sq.c		\
				vec2_dist.c			\
				vec2_div.c			\
				vec2_dot.c			\
				vec2_length_sq.c	\
				vec2_length.c		\
				vec2_mul.c			\
				vec2_normal.c		\
				vec2_normalize.c	\
				vec2_project.c		\
				vec2_set_length.c	\
				vec2_sub.c			\
				vec2.c				\
				vec3_add.c			\
				vec3_cross.c		\
				vec3_dist_sq.c		\
				vec3_dist.c			\
				vec3_div.c			\
				vec3_dot.c			\
				vec3_equal.c		\
				vec3_length_sq.c	\
				vec3_length.c		\
				vec3_mul.c			\
				vec3_normalize.c	\
				vec3_set_length.c	\
				vec3_sub.c			\
				vec3.c				\
				vec4f_p2.c			\
				vec4f.c

SRCPATH_MATH_VEC := $(addprefix $(SRCDIR_MATH)$(SRCDIR_MATH_VEC), $(SRC_MATH_VEC))

SRC_MEM :=	ft_bzero.c		\
			ft_freetab.c	\
			ft_memalloc.c	\
			ft_memccpy.c	\
			ft_memcmp.c		\
			ft_memchr.c		\
			ft_memcpy.c		\
			ft_memdel.c		\
			ft_memfill.c	\
			ft_memmove.c	\
			ft_memrealloc.c	\
			ft_memset.c		\
			ft_memswap.c

SRCPATH_MEM := $(addprefix $(SRCDIR_MEM), $(SRC_MEM))

SRC_STR :=	ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_isdigit.c			\
			ft_isprint.c			\
			ft_strappend.c			\
			ft_strcat.c				\
			ft_strchr.c				\
			ft_strchrnull.c			\
			ft_strclr.c				\
			ft_strcmp.c				\
			ft_strcpy.c				\
			ft_strctrim_left.c		\
			ft_strctrim_right.c		\
			ft_strdel.c				\
			ft_strdup.c				\
			ft_strequ.c				\
			ft_strinsert.c			\
			ft_striter.c			\
			ft_striteri.c			\
			ft_strjoin.c			\
			ft_strjoin_free.c		\
			ft_strlcat.c			\
			ft_strlcpy.c			\
			ft_strlen.c				\
			ft_strljoin_free.c		\
			ft_strmap.c				\
			ft_strmapi.c			\
			ft_strncat.c			\
			ft_strncmp.c			\
			ft_strncpy.c			\
			ft_strnequ.c			\
			ft_strnew.c				\
			ft_strnstr.c			\
			ft_strpad_left_free.c	\
			ft_strpad_left.c		\
			ft_strrchr.c			\
			ft_strsplit.c			\
			ft_strssplit_p2.c		\
			ft_strssplit.c			\
			ft_strstr.c				\
			ft_strsub.c				\
			ft_strtolower.c			\
			ft_strtrim.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_wstrlen.c

SRCPATH_STR := $(addprefix $(SRCDIR_STR), $(SRC_STR))

LFT_SRCS :=	$(SRCPATH_CLOCK)	\
			$(SRCPATH_CONV)		\
			$(SRCPATH_VECTOR)	\
			$(SRCPATH_IO)		\
			$(SRCPATH_GNL)		\
			$(SRCPATH_LST)		\
			$(SRCPATH_MAP)		\
			$(SRCPATH_MATH)		\
			$(SRCPATH_MATH_VEC)	\
			$(SRCPATH_MEM)		\
			$(SRCPATH_STR)

LFT_OBJS := $(LFT_SRCS:.c=.o)

HIDE_CURSOR := \e[?25l

SHOW_CURSOR := \e[?25h

CURSOR_LEFT := \e[1000D

ERASE_ENDLINE := \e[K

ERASE_FULLLINE := \e[2K

# final files

OBJDIRS =	$(LFT_OBJDIRS)

OBJS :=	$(addprefix $(LFT_OBJDIR), $(LFT_OBJS))

SRCS :=	$(addprefix $(LFT_SRCDIR), $(LFT_SRCS))

HDRS :=	$(LFT_HDRS)

# global rules (compiler / shell)

CC = clang
RAN = ar rcs
RM = /bin/rm -rf
PRINT = printf
CFLAGS = -Wall -Werror -Wextra
MAIN = test.c


# Flags

ifeq ($(DEBUG), 1)
	CFLAGS += -g3
endif

ifeq ($(FS), 1)
	CFLAGS += -fsanitize=address -fno-omit-frame-pointer
endif

ifneq ($(OPTI), 0)
	CFLAGS += -O3
endif

# Rules

all: premake

premake: $(OBJDIRS)
	$(MAKE) -s $(NAME) --no-print-directory COUNT=1 OPTI=$(OPTI) FS=$(FS) DEBUG=$(DEBUG)

$(NAME): $(OBJS)
	@$(PRINT) "$(ERASE_FULLLINE)\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n$(SHOW_CURSOR)" "$(NAME)" "Compilation lib"
	@$(RAN) $(NAME) $(OBJS)

$(PRTF_OBJDIR)%.o: $(PRTF_SRCDIR)%.c $(HDRS)
	@$(CC) $(CFLAGS) -c -I$(LFT_HDRDIR) -I$(PRTF_HDRDIR) -o $@ $<
	@$(PRINT) "$(HIDE_CURSOR)\033[1;34m%-20s\033[1;33m%-25s\033[0;32m$(PROGRESS)\033[0m$(ERASE_ENDLINE)$(CURSOR_LEFT)" "$(NAME)" "Compilation"

$(LFT_OBJDIR)%.o: $(LFT_SRCDIR)%.c $(LFT_HDRS)
	@$(CC) $(CFLAGS) -c -I$(LFT_HDRDIR) -o $@ $<
	@$(PRINT) "$(HIDE_CURSOR)\033[1;34m%-20s\033[1;33m%-25s\033[0;32m$(PROGRESS)\033[0m$(ERASE_ENDLINE)$(CURSOR_LEFT)" "$(NAME)" "Compilation"

$(OBJDIRS):
	@mkdir -p $@

norminette:
	@norminette $(SRCS) $(HDRS)

test: $(NAME)
	@$(CC) -o $@ $(MAIN) -I $(LFT_HDRDIR) -I$(PRTF_HDRDIR) -L. -lft -lm
	@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "$(NAME)" "Compilation $@"

unit_test: $(NAME)
	@$(CC) $(CFLAGS) -o $@ $(UNIT_TEST_SRC) -I$(UNIT_TEST_DIR) -I$(LFT_HDRDIR) -L. -lft -lm -lpthread
	@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "$(NAME)" "Compilation $@"

profile:
	@$(CC) -pg -o profile $(MAIN) $(SRCS) -I$(PRTF_HDRDIR) -I$(LFT_HDRDIR) -lm
	@$(PRINT) "\033[1;34m%-20s\033[1;31m%-25s\033[0;32m[OK]\033[0m\n" "$(NAME)" "Compilation $@"

analyze_info:
	@$(PRINT) "\033[1;34m%-20s\033[1;30m%-25s\033[0;32m[...]\033[0m\n" "$(NAME)" "Analyze source code..."

show_cursor:
	@printf "\033[38;2;0;255;0mThe cursor just came back ...\033[0m$(SHOW_CURSOR)\n"

analyze: CFLAGS += --analyze
analyze: fclean analyze_info all clean_analyze fclean_analyze

clean clean_analyze:
	@$(RM) $(OBJDIRS)
	@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "$(NAME)" "Cleaning objects"

fclean fclean_analyze: clean
	@$(RM) $(NAME)
	@$(PRINT) "\033[1;34m%-20s\033[1;33m%-25s\033[0;32m[OK]\033[0m\n" "$(NAME)" "Cleaning lib"

re: fclean all

.PHONY: all clean fclean re test debug profile analyze_info analyze clean_analyze fclean_analyze norminette unit_test

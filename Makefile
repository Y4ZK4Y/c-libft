# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: yasamankarimi <yasamankarimi@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/05 16:29:24 by yasamankari   #+#    #+#                  #
#    Updated: 2024/01/05 17:58:08 by yasamankari   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

# Compilation
CC := cc
CFLAGS := -Wall -Wextra -Werror -I./include

# Directories
BUILD_DIR := ./build
SRC_DIR := ./src

HEADERS := ./include/libft.h

SRCS :=	ft_toupper.c ft_tolower.c ft_substr.c ft_strtrim.c \
		ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strmapi.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strjoin.c \
		ft_striteri.c ft_strdup.c ft_strchr.c ft_split.c \
		ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
		ft_putchar_fd.c ft_memset.c ft_memmove.c ft_memcpy.c \
		ft_memchr.c ft_itoa.c ft_isprint.c ft_isdigit.c \
		ft_isascii.c ft_isalpha.c ft_isalnum.c ft_calloc.c \
		ft_bzero.c ft_atoi.c ft_memcmp.c ft_isspace.c \
		ft_islower.c ft_isupper.c ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJECTS := $(addprefix $(BUILD_DIR)/,$(SRCS:.c=.o))

# Default Target
all: $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	mkdir -p $(BUILD_DIR)
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -rf $(BUILD_DIR)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

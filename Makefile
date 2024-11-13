NAME 		= 	libft.a
CC 		= 	gcc
HEAD		=	libft.h
CFLAGS 		= 	-Wall -Werror -Wextra
SRC 		= 	ft_atoi.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_memchr.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_memset.c 
# SRC_BONUS	=	

OBJ 		= 	$(SRC:.c=.o)
# OBJ_BONUS	=	$(SRC_BONUS:.c=.o)

all: 			$(NAME)

$(NAME): 		$(OBJ) Makefile
				ar rcs $(NAME) $(OBJ)

%.o: %.c		$(HEAD)
				$(CC) $(CFLAGS) -c $< -o $@

#bonus:			$(OBJ) $(OBJ_BONUS)
#				ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
				rm -f $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:				all clean fclean re
NAME = libft.a
SRCS = ft_atoi.c ft_calloc.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_substr.c
BONUSS = 
OBJS = $(SRCS:.c=.o)
CC = gcc
HEADER = libft.h
RM = rm -f
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror

.c.o :
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	$(LIBC) $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) $(OBJS)

re: fclean all

.PHONY: all clean fclean re .c.o bonus

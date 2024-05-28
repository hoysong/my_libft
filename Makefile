# ar's -r -u -s to -r -u
# %.o: %.c
#	 $(CC) $(CFLAGS) -c $? -o $@
# is replaced by
# "OBJS = $(SRCS:.c=.o)"

SRCS = \
       ft_split.c \
       ft_atoi.c \
       ft_strchr.c \
       ft_bzero.c \
       ft_strdup.c \
       ft_calloc.c \
       ft_striteri.c \
       ft_isalnum.c \
       ft_strjoin.c \
       ft_isalpha.c \
       ft_strlcat.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_strlcpy.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_itoa.c \
       ft_strmapi.c \
       ft_memchr.c \
       ft_strncmp.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strrchr.c \
       ft_memset.c \
       ft_strtrim.c \
       ft_putchar_fd.c \
       ft_substr.c \
       ft_putendl_fd.c \
       ft_tolower.c \
       ft_putnbr_fd.c \
       ft_toupper.c \
       ft_putstr_fd.c \
	   get_next_line.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

AR = ar -U -r -u -s 

NAME = libft.a

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

all: $(NAME)

RM = rm -f

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re

RED = \033[0;31m
NOCOLOR = \033[0m
GREEN = \033[0;32m
RED = \033[1;31m

PATH_SRC =			./
PATH_OBJS =			./

NAME = libft.a

FILES = \
		  $(PATH_SRC)ft_isalpha.c $(PATH_SRC)ft_isdigit.c $(PATH_SRC)ft_isalnum.c $(PATH_SRC)ft_isascii.c $(PATH_SRC)ft_isprint.c $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_memset.c $(PATH_SRC)ft_bzero.c $(PATH_SRC)ft_memcpy.c \
		  $(PATH_SRC)ft_memmove.c $(PATH_SRC)ft_strlcpy.c $(PATH_SRC)ft_strlcat.c $(PATH_SRC)ft_toupper.c $(PATH_SRC)ft_tolower.c $(PATH_SRC)ft_strchr.c $(PATH_SRC)ft_strrchr.c $(PATH_SRC)ft_strncmp.c \
		  $(PATH_SRC)ft_memchr.c $(PATH_SRC)ft_memcmp.c $(PATH_SRC)ft_strnstr.c $(PATH_SRC)ft_atoi.c $(PATH_SRC)ft_calloc.c $(PATH_SRC)ft_strdup.c $(PATH_SRC)ft_substr.c $(PATH_SRC)ft_strjoin.c $(PATH_SRC)ft_strtrim.c \
		  $(PATH_SRC)ft_split.c $(PATH_SRC)ft_itoa.c $(PATH_SRC)ft_strmapi.c $(PATH_SRC)ft_striteri.c $(PATH_SRC)ft_putchar_fd.c $(PATH_SRC)ft_putstr_fd.c $(PATH_SRC)ft_putendl_fd.c $(PATH_SRC)ft_putnbr_fd.c

OBJS = $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(FILES))

BFILES = \
		$(PATH_SRC)ft_lstnew.c $(PATH_SRC)ft_lstadd_front.c $(PATH_SRC)ft_lstsize.c $(PATH_SRC)ft_lstlast.c $(PATH_SRC)ft_lstadd_back.c $(PATH_SRC)ft_lstdelone.c \
		$(PATH_SRC)ft_lstclear.c $(PATH_SRC)ft_lstiter.c $(PATH_SRC)ft_lstmap.c

BOBJS = $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(BFILES))

CC = clang -I
CFLAGS = -Wextra -Werror -Wall
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Assembling $(NAME)"
	@ar -rcs $(NAME) $(OBJS)
	@ranlib	$(NAME)
	@echo "${GREEN}✓${NOCOLOR}"
	@echo "$(GREEN)Compilation is done$(NOCOLOR)"

$(PATH_OBJS)%.o:	$(PATH_SRC)%.c
	@echo "Compiling $^: "
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "${GREEN}✓${NOCOLOR}"

bonus: $(NAME) $(BOBJS)
	@echo "Assembling $(NAME) bonus"
	@ar -rcs $(NAME) $(BOBJS)
	@ranlib	$(NAME)
	@echo "${GREEN}✓${NOCOLOR}"
	@echo "$(GREEN)Compilation is done$(NOCOLOR)"

clean:
	@echo "${RED}Cleaning objects in libft: ${NOCOLOR}"
	@$(RM) $(OBJS) $(BOBJS)
	@echo "${GREEN}✓${NOCOLOR}"

fclean: clean
	@echo "${RED}Cleaning all in libft: ${NOCOLOR}"
	@$(RM) $(NAME)
	@echo "${GREEN}✓${NOCOLOR}"

re: fclean all

norme: 
	norminette $(PATH_SRC)

.PHONY: re all fclean clean norme bonus
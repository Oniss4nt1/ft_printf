# ---------------------------- COLORS ---------------------------- # 

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RESET = \033[0m
#MAGENTA = \033[0;35m

# ---------------------------- LIBRARY ---------------------------- #

NAME = libftprintf.a

# --------------------------- MANDATORY --------------------------- #

SRCS =	ft_printf.c print_base.c print_char.c print_int.c print_percent.c \
		print_pointer.c print_string.c print_unsign_int.c

OBJS-MANDATORY = $(addprefix srcs/, $(SRCS:.c=.o))

# ----------------------------- BONUS ----------------------------- #

#SRCS-BONUS = 

# -------------------------- COMPILATION -------------------------- #

FLAGS = -Wall -Wextra -Werror
HEADER = ft_print.h

# --------------------------- RULES --------------------------- #

all: $(NAME)

$(NAME): $(OBJS-MANDATORY)
	@ar rc $(NAME) $(OBJS-MANDATORY)
	@ranlib $(NAME)
	@echo "$(GREEN)$(NAME) created $(RESET)"

%.o: %.c $(HEADER)
	cc $(FLAGS) -c $< -o $@ -I $(HEADER)

clean:
	@rm -f $(OBJS-MANDATORY)
	@echo "$(RED)$(NAME) deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) fclean executed $(RESET)"

re: fclean all

.PHONY: all clean fclean re
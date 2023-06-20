############################# COLORS ###############################

RED		= 		\033[1;31m
GREEN 	= 		\033[1;32m
YELLOW 	= 		\033[1;33m
BLUE 	= 		\033[1;34m
RESET 	= 		\033[0m

############################# LIBRARY ###############################

NAME 	= 		libftprintf.a

############################# MANDATORY #############################

SRCS 	=		ft_printf.c print_hex_d.c print_char.c \
				print_int.c print_percent.c print_pointer.c \
				print_string.c print_unsign_int.c ft_printf_utils.c \

OBJS-SRC = 	$(addprefix ./, $(SRCS:.c=.o))

############################## FLAGS ################################

FLAGS 		= 	-Wall -Wextra -Werror
HEADER 		= 	ft_printf.h

############################## RULES ################################

all: $(NAME)

$(NAME): $(OBJS-SRC) 
	@ar rc $(NAME) $(OBJS-SRC)
	@ranlib $(NAME)
	@echo "$(GREEN)$(NAME) created $(RESET)"

mandatory: $(OBJS-SRC)
	@ar rc $(NAME) $(OBJS-SRC)
	@ranlib $(NAME)
	@echo "$(GREEN)Mandatory from $(NAME) created $(RESET)"

bonus: all
	@echo "$(GREEN)Bonus from $(NAME) created $(RESET)"

norm:
	@echo "$(BLUE)Checking Norminette...$(RESET)"
	@norminette $(SRCS:%=./%) $(HEADER)
	@echo "$(BLUE)Norminette done $(RESET)"

clean:
	@rm -f $(OBJS-SRC)
	@echo "$(RED)Object files deleted $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) deleted $(RESET)"

re: fclean all

.PHONY: all clean fclean re
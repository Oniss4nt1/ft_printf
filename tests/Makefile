#----------------------- Makefile for minunit tests -----------------------#
################################ Colors ####################################

GREEN 			= \033[1;32m
YELLOW 			= \033[1;33m
RED 			= \033[1;31m
RESET 			= \033[0m


############################# Project files ################################
SRC 			= ../src/ft_printf.c ../src/ft_printf_utils.c ../src/print_hex_d.c ../src/print_char.c ../src/print_int.c \
				../src/print_percent.c ../src/print_pointer.c ../src/print_string.c ../src/print_unsign_int.c

HEADER_PROJECT 	= ../src/ft_printf.h

############################# Test files ###################################
TESTS 			= test_int.c test_pointer.c test_string.c test_space.c test_upperhex.c
PROGRAM_TEST 	= $(patsubst %.c, %, $(TESTS))
HEADER_MINUNIT 	= ../minunit.h

############################## Compiler ####################################

$(TEST):	$(SRC) $(TEST).c
			@cc $(SRC) $(TEST).c -o $(TEST)
			@./$(PROGRAM_TEST)
			@echo "$(YELLOW) Testing $(TEST)done!$(RESET)"
			@rm -f $(TEST)
			@echo "$(YELLOW)Cleaning done!$(RESET)"


$(PROGRAM_TEST): $(OBJS)
			@cc $(SRC) $@.c -o $@


leak:	test
			@valgrind --track-origins=yes --error-exitcode=42 --leak-check=full ./${PROGRAM_TEST}

clean:		
			@rm -f ${PROGRAM_TEST} 
			@echo "$(YELLOW)Cleaning done!$(RESET)"

fclean:		clean

re:			fclean

.PHONY: 	



#include "minunit.h"
#include <stdio.h>
#include "../src/ft_printf.h"


MU_TEST(test_putnbr_ptr_is_negative)
{
	int valor_testado = -42;
	int base = 16;

	putnbr_ptr(valor_testado, base);
}

MU_TEST(test_putnbr_ptr_is_int_min)
{
	int valor_testado = -2147483648;
	int base = 16;

	putnbr_ptr(valor_testado, base);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_putnbr_ptr_is_negative);
	MU_RUN_TEST(test_putnbr_ptr_is_int_min);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
#include "minunit.h"
#include <stdio.h>
#include "../src/ft_printf.h"

MU_TEST(test_int_value_is_int_min)
{
	int valor_do_int = -2147483648;
	printf("valor_do_print: %d\n", valor_do_int);
	ft_printf("valor_do_ft_printf: %d\n", valor_do_int);

	int comprimento_do_printf = printf("%d", valor_do_int);
	int comprimento_do_ft_printf = ft_printf("%d", valor_do_int);

	mu_assert_int_eq(comprimento_do_ft_printf, comprimento_do_printf);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_int_value_is_int_min);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
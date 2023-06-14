#include "minunit.h"
#include <stdio.h>
#include "../src/ft_printf.h"


MU_TEST(test_pointer_value_is_negative)
{
	int value = -42;
	int expected = ft_printf("%p", &value);
	int result = printf("%p", &value);
	mu_assert_int_eq(expected, result);
}

MU_TEST(test_pointer_value_is_positive)
{
	int value = 42;
	int expected = ft_printf("%p", &value);
	int result = printf("%p", &value);
	mu_assert_int_eq(expected, result);
}

MU_TEST(test_pointer_value_is_zero)
{
	int value = 0;
	int expected = ft_printf("%p", &value);
	int result = printf("%p", &value);
	mu_assert_int_eq(expected, result);
}

MU_TEST(test_pointer_value_is_int_max)
{
	int value = 2147483647;
	int expected = ft_printf("%p", &value);
	int result = printf("%p", &value);
	mu_assert_int_eq(expected, result);
}

MU_TEST(test_pointer_value_is_int_min)
{
	int value = -2147483648;
	int expected = ft_printf("%p", &value);
	int result = printf("%p", &value);
	mu_assert_int_eq(expected, result);
}

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_pointer_value_is_negative);
	MU_RUN_TEST(test_pointer_value_is_positive);
	MU_RUN_TEST(test_pointer_value_is_zero);
	MU_RUN_TEST(test_pointer_value_is_int_max);
	MU_RUN_TEST(test_pointer_value_is_int_min);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
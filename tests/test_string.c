#include "minunit.h"
#include <stdio.h>
#include "../src/ft_printf.h"

MU_TEST(test_string_format_is_NULL)
{
	puts("\n");
	puts("-------------------------------");
	puts("#1 TESTING STRING FORMAT IS NULL");
    puts("-------------------------------");
	puts("\n");
	char str = NULL;

	puts("ft_printf result:");
    int expected = ft_printf("NULL %s NULL", str);
	puts ("\n");
	puts("\nPrintf result:");
    int result = printf("NULL %s NULL", str);

    mu_assert_int_eq(expected, result);
	puts("\n");
    puts("-------------------------------");
}

MU_TEST(test_string_format_is_empty)
{
	puts("#2 TESTING STRING FORMAT IS EMPTY");
	puts("-------------------------------");
	puts("\n");
	char str[10] = " ";

	puts("ft_printf result:");
	int expected = ft_printf("--%s--", str);
	puts ("\n");
	puts("\nPrintf result:");
	int result = printf("--%s--", str);

	mu_assert_string_eq(&expected, &result);
	puts("\n");
    puts("-------------------------------");
}

MU_TEST(test_string_format_is_hello)
{
	puts("#3 TESTING STRING FORMAT IS HELLO");
	puts("-------------------------------");
	puts("\n");

	char str[10] = "hello";

	puts("ft_printf result:");
	int expected = ft_printf("%s", str);
	puts ("\n");
	puts("\nPrintf result:");
	int result = printf("%s", str);

	mu_assert_string_eq(&expected, &result);

}

// MU_TEST(testing_three_different_strings)
// {
// 	puts("-------------------------------");
// 	char str1[10] = " ";
// 	char str2[10] = "-";
// 	char str3[10] = "hello";

// 	int expected = ft_printf("%s %s %s", str1, str2, str3);
// 	int result = printf("%s %s %s", str1, str2, str3);

// 	mu_assert_string_eq(&expected, &result);
// 	puts("\n");
// 	puts("\n");
// }

MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_string_format_is_NULL);
	MU_RUN_TEST(test_string_format_is_empty);
	MU_RUN_TEST(test_string_format_is_hello);
	// MU_RUN_TEST(testing_three_different_strings);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
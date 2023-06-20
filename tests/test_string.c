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

MU_TEST(test_string_with_flagspace_and_1)
{
    //Header
    puts("\n");
	puts("-------------------------------");
	puts("#4 TESTING STRING WITH SPACE AND 1");
    puts("-------------------------------");
	puts("\n");


    //Body
    char str[10] = "hello";
    char expected = ft_printf("% 1s", str);
    char result = printf("% 1s", str);

    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: % 1s\n", str);
        ft_printf("Result: % 1s\n", str);
    }
    mu_assert(expected == result, "error, strings differ");

    //Footer
    puts("\n");
    puts("-------------------------------");
    puts("#4 TEST STRING WITH SPACE AND 1 ENDED");
    puts("-------------------------------");
    puts("\n");
}


MU_TEST_SUITE(test_suite)
{
	MU_RUN_TEST(test_string_format_is_NULL);
	MU_RUN_TEST(test_string_format_is_empty);
	MU_RUN_TEST(test_string_format_is_hello);
	MU_RUN_TEST(test_string_with_flagspace_and_1);
}

int main(void)
{
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return (MU_EXIT_CODE);
}
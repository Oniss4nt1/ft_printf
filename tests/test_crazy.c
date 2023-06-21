#include "minunit.h"
#include <stdio.h>
#include "../src/ft_printf.h"

MU_TEST(test_int_have_2_as_field_width)
{
    //Header
    puts("\n");
	puts("-------------------------------");
	puts("#1 TEST INT HAVE 2 AS FIELD WIDTH");
    puts("-------------------------------");
	puts("\n");


    //Body
    int expected = printf("%2d", 42);
    puts("\n");
    int result = ft_printf("%2d", 42);


    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", 0);
        ft_printf("Result: %X\n", 0);
    }
    mu_assert(expected == result, "error, strings differ");

    //Footer
    puts("\n");
    puts("-------------------------------");
    puts("#1 TEST INT HAVE 2 AS FIELD WIDTH ENDED");
    puts("-------------------------------");
    puts("\n");
}

MU_TEST(test_int_have_2_as_field_width_and_minus)
{
    //Header
    puts("\n");
    puts("-------------------------------");
    puts("#2 TEST INT HAVE 2 AS FIELD WIDTH AND MINUS");
    puts("-------------------------------");
    puts("\n");

    //Body
    int expected = printf("%2d", -42);
    puts("\n");
    int result = ft_printf("%2d", -42);


    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", 0);
        ft_printf("Result: %X\n", 0);
    }
    mu_assert(expected == result, "error, strings differ");
}

MU_TEST(test_int_have_2_as_field_width_and_zero)
{
    //Header
    puts("\n");
    puts("-------------------------------");
    puts("#3 TEST INT HAVE 2 AS FIELD WIDTH AND ZERO");
    puts("-------------------------------");
    puts("\n");

    //Body
    int expected = printf("%02d", 42);
    puts("\n");
    int result = ft_printf("%02d", 42);

    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", 0);
        ft_printf("Result: %X\n", 0);
    }
    mu_assert(expected == result, "error, strings differ");
}

MU_TEST(test_int_have_2_as_field_width_and_zero_and_minus)
{
    //Header
    puts("\n");
    puts("-------------------------------");
    puts("#4 TEST INT HAVE 2 AS FIELD WIDTH AND ZERO AND MINUS");
    puts("-------------------------------");
    puts("\n");

    //Body
    int expected = printf("%02d", -42);
    puts("\n");
    int result = ft_printf("%02d", -42);

    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", 0);
        ft_printf("Result: %X\n", 0);
    }
    mu_assert(expected == result, "error, strings differ");
}

MU_TEST(test_int_have_2_as_field_width_and_zero_and_minus_and_asterisk)
{
    //Header
    puts("\n");
    puts("-------------------------------");
    puts("#5 TEST INT HAVE 2 AS FIELD WIDTH AND ZERO AND MINUS AND ASTERISK");
    puts("-------------------------------");
    puts("\n");

    //Body
    int expected = printf("%0*d", -2, -42);
    puts("\n");
    int result = ft_printf("%0*d", -2, -42);

    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", 0);
        ft_printf("Result: %X\n", 0);
    }
    mu_assert(expected == result, "error, strings differ");
}

MU_TEST(test_int_have_2_flags)
{
    //Header
    puts("\n");
    puts("-------------------------------");
    puts("#6 TEST INT HAVE 2 FLAGS");
    puts("-------------------------------");
    puts("\n");

    //Body
    int expected = printf("%0-2d", -42);
    puts("\n");
    int result = ft_printf("%0-2d", -42);

    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", 0);
        ft_printf("Result: %X\n", 0);
    }
    mu_assert(expected == result, "error, strings differ");
}

MU_TEST(test_string_have_vovo_between_percent_and_s)
{
    //Header
    puts("\n");
    puts("-------------------------------");
    puts("#7 TEST STRING HAVE VOVO BETWEEN PERCENT AND S");
    puts("-------------------------------");
    puts("\n");

    //Body
    int expected = printf("%vovos", "");
    puts("\n");
    int result = ft_printf("%vovos", "");

    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", 0);
        ft_printf("Result: %X\n", 0);
    }
    mu_assert(expected == result, "error, strings differ");
}

MU_TEST_SUITE(test_suite) 
{
    MU_RUN_TEST(test_int_have_2_as_field_width);
    MU_RUN_TEST(test_int_have_2_as_field_width_and_minus);
    MU_RUN_TEST(test_int_have_2_as_field_width_and_zero);
    MU_RUN_TEST(test_int_have_2_as_field_width_and_zero_and_minus);
    MU_RUN_TEST(test_int_have_2_as_field_width_and_zero_and_minus_and_asterisk);
    MU_RUN_TEST(test_int_have_2_flags);
    MU_RUN_TEST(test_string_have_vovo_between_percent_and_s);
}

int main(void)
{
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return (0);
}
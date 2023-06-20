#include "minunit.h"
#include <stdio.h>
#include "../src/ft_printf.h"

MU_TEST(test_hex_is_0)
{
    //Header
    puts("\n");
	puts("-------------------------------");
	puts("#1 TEST STRING IS 0");
    puts("-------------------------------");
	puts("\n");


    //Body
    int expected = printf("%X", 0);
    puts("\n");
    int result = ft_printf("%X", 0);


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
    puts("#1 TEST STRING IS 0 ENDED");
    puts("-------------------------------");
    puts("\n");
}

MU_TEST(test_hex_is_minus1)
{
    //Header
    puts("\n");
	puts("-------------------------------");
	puts("#2 TEST STRING IS -1");
    puts("-------------------------------");
	puts("\n");


    //Body
    int hex = -1;
    int expected = printf("%X", hex);
    puts("\n");
    int result = ft_printf("%X", hex);


    if (expected != result) 
    {
        printf("\nStrings differ:\n");
        printf("Expected: %X\n", hex);
        ft_printf("Result: %X\n", hex);
    }
    mu_assert(expected == result, "error, strings differ");

    //Footer
    puts("\n");
    puts("-------------------------------");
    puts("#2 TEST STRING IS -1 ENDED");
    puts("-------------------------------");
    puts("\n");
}

MU_TEST_SUITE(test_suite)
{
    MU_RUN_TEST(test_hex_is_0);
    MU_RUN_TEST(test_hex_is_minus1);
}

int main(void)
{
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return (MU_EXIT_CODE);
}

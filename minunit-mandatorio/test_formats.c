#include "minunit.h"
#include "/home/bruno/Documents/42SP/03. printf/ft_printf.h"


MU_TEST(test_print_char_letter_a)
{
    int c = 'a';
    mu_assert_int_eq(1, print_char(c));
}

MU_SUITE(test_suite)
{
    MU_RUN_TEST(test_print_char_letter_a);
}

int main(void)
{
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return (MU_EXIT_CODE);
}
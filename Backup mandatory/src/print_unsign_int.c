#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int print_unsign_int(unsigned int arg)
{
    int index;
    int digit;

    index = 0;
    if (arg >= 10)
        index += print_int((arg / 10));
    digit = (arg % 10) + '0';
    index += write(1, &digit, 1);
    return (index);
}

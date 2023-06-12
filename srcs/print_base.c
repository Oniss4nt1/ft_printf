#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int print_base(int arg, int base)
{
    int index;
    int digit;

    index = 0;
    if (arg < 0)
    {
        index += write(1, "-", 1);
        arg *= -1;
    }
    if (arg >= base)
        index += print_base((arg / base), base);
    digit = arg % base;
    if (digit < 10)
        digit += '0';
    else
        digit += 'a' - 10;
    index += write(1, &digit, 1);
    return (index);
}
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int print_string(char *arg)
{
    int index;

    index = 0;
    while (*arg)
    {
        index += write(1, arg, 1);
        arg++;
    }
    return (index);
}
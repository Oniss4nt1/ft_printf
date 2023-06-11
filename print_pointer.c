#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    putnbr_ptr(unsigned long int num, int base)
{
    if (num >= (unsigned long int)base)
         putnbr_ptr((num / base), base);
    if (num % base < 10)
        ft_putchar(num % base + '0');
    else
        ft_putchar(num % base + 'a' - 10);
}


int print_pointer(void *arg, int base)
{
    int index;

    index = 0;
    index += write(1, "0x", 2);
    putnbr_ptr((unsigned long int)arg, base);
    return (index);
}
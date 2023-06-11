#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// void    ft_putnbr_base(long int n, int base)
// {
//     int digit;

//     if (base < 2 || base > 16)
//         return (NULL);

//     if (n < 0)
//     {
//         ft_putchar('-');
//         n *= -n;
//     }
//     if (n >= 0)
//         ft_putnbr_base((n / base), base);
    
//     digit = (n % base);
//     if (digit < 10)
//         ft_putchar(digit + '0');
//     else
//         ft_putchar(digit + 'a' - 10);
// }

void    putnbr_ptr(unsigned long int num, int base)
{
    if (num >= (unsigned long int)base)
         putnbr_ptr((num / base), base);
    if (num % base < 10)
        ft_putchar(num % base + '0');
    else
        ft_putchar(num % base + 'a' - 10);
}

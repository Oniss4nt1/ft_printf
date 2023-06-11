#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int convert_specifiers(const char *format, va_list args)
{
    int index;

    index = 0;
    if (*format == '%')
    {
        format++;
        if (*format == 'c')
            index += print_char(va_arg(args, int));
        else if (*format == 's')
            index += print_string(va_arg(args, char *));
        else if (*format == 'p')
            index += print_pointer(va_arg(args, void *), 16);
        else if (*format == 'u')
            index += print_unsign_int(va_arg(args, unsigned int));
        else if (*format == 'd' || *format == 'i')
            index += print_int(va_arg(args, int));
        else if (*format == 'x' || *format == 'X')
            index += print_base(va_arg(args, int), 16);
        else if (*format == '%')
            index += print_percent();
    }
    return (index);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int index;

    index = 0;
    va_start(args, str);
    while (*str)
    {
        if (*str == '%')
        {
            index += convert_specifiers(str, args);
            str++;
        }
        else
            index += write(1, str, 1);
        str++;
    }
    va_end(args);
    return (index);
}


int main(void)
{
    // int c = 'A';
    char *str = "Hello World!";
    // int n = -123456789;
    // int x = 13121995;
    // int *ptr = 0;


    puts("\n");
    ft_printf("Ft_printf: %s\n", str);
    printf("\nPrintf: %s\n", str);

    // puts("\n");
    // print_int(n);
    // printf("\nPrintf: %d\n", n);

    // puts("\n");
    // print_base(x, 16); // bases existente: 2 (binário), 8 (octal), 10 (decimal), 16 (hexadecimal)
    // printf("\nPrintf: %x\n", x);

    // puts("\n");
    // print_pointer(&ptr, 16);
    // printf("\nPrintf: %p\n", &ptr);

    // puts("\n");
    // print_percent();
    // printf("\nPrintf: %%\n");

    // puts("\n");
    // print_unsign_int(-123456789);
    // printf("\nPrintf: %u\n", -123456789);
    
    return (0);
}
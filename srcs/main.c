#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int main(void)
{
    // int c = 'A';
    // char *str = "Hello World!";
    // int n = -123456789;
    // int x = 13121995;
    int number = 0;
    int *ptr = &number;



    // print_char(c);

    // puts("\n");
    // print_string(str);
    // printf("\nPrintf: %s\n", str);

    // puts("\n");
    // print_int(n);
    // printf("\nPrintf: %d\n", n);

    // puts("\n");
    // print_base(x, 16); // bases existente: 2 (binário), 8 (octal), 10 (decimal), 16 (hexadecimal)
    // printf("\nPrintf: %x\n", x);

    puts("\n");
    int len = ft_printf("%p\n", ptr);
    int len2 = printf("%p\n", ptr);


    printf("lenqqq: %d\n", len);
    printf("len2: %d\n", len2);
    // puts("\n");
    // print_percent();
    // printf("\nPrintf: %%\n");

    // puts("\n");
    // print_unsign_int(-123456789);
    // printf("\nPrintf: %u\n", -123456789);
    
    return (0);
}
#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int putnbr_ptr(unsigned long int arg, int base)
{
	int length;

	length = 0;
	if (arg >= (unsigned long int)base)
		length += putnbr_ptr((arg / base), base);
	if (arg % base < 10)
		ft_putchar(arg % base + '0');
	else
		ft_putchar(arg % base + 'a' - 10);
	length++;
	return (length);
}


int	print_pointer(unsigned long int arg, int base)
{
	int	length;

	length = 0;
	if (!arg)
	{
		length += write(1, "(nil)", 5);
		return (length);
	}
	length += write(1, "0x", 2);
	length += putnbr_ptr(arg, base);
	return (length);
}

// int main(void)
// {
//     int number = -15;
//     int *ptr = &number;

//     int len = ft_printf("%p\n", ptr);
//     int len2 = printf("%p\n", ptr);

//     printf("len: %d\n", len);
//     printf("len2: %d\n", len2);

//     return (0);
// }
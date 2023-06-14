#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


void	ft_putchar_int(char c)
{
	write(1, &c, 1);
}

int putnbr_int(unsigned int value, int base)
{
	int length;

	length = 0;
	if (value < 0)
	{
		length += write(1, "-", 1);
		value = (unsigned int)(value * -1);
	}
	else
		value = (unsigned int)value;
	if (value >= (unsigned int)base)
		length += putnbr_int((value / base), base);
	if (value % base < 10)
		ft_putchar(value % base + '0');
	else
		ft_putchar(value % base + 'a' - 10);
	length++;
	return (length);
}

int print_int(int arg)
{
	int index;

	index = 0;
	if (arg < 0)
	{
		index += write(1, "-", 1);
		arg *= -1;
	}
	index += putnbr_int(arg, 10);
	return (index);
}
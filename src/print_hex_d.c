#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar_hex(char c)
{
	write(1, &c, 1);
}

int	putnbr_hex(unsigned int value, int base, int uppercase)
{
	int	length;

	length = 0;
	if (value < 0)
	{
		length += write(1, "-", 1);
		value = (unsigned int)(value * -1);
	}
	else
		value = (unsigned int)value;
	if (value >= (unsigned int)base)
		length += putnbr_hex((value / base), base, uppercase);
	if (value % base < 10)
		ft_putchar(value % base + '0');
	else
	{
		if (uppercase)
			ft_putchar(value % base + 'A' - 10);
		else
			ft_putchar(value % base + 'a' - 10);
	}
	length++;
	return (length);
}
	// int length;

	// length = 0;
	// if (value < 0)
	// {
	// 	length += write(1, "-", 1);
	// 	value = (unsigned int)(value * -1);
	// }
	// else
	// 	value = (unsigned int)value;
	// if (value >= (unsigned int)base)
	// 	length += putnbr_hex((value / base), base);
	// if (value % base < 10)
	// 	ft_putchar(value % base + '0');
	// else
	// 	ft_putchar(value % base + 'a' - 10);
	// length++;
	// return (length);


int print_hex_d(unsigned int arg, int uppercase)
{
	int index;

	index = 0;
	if (arg < 0)
	{
		index += write(1, "-", 1);
		arg *= -1;
	}
	index += putnbr_hex(arg, 16, uppercase);
	return (index);
}
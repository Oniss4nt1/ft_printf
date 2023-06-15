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


int print_hex_d(unsigned int arg, int uppercase, t_flags flags)
{
	int length;

	length = 0;
	if (flags.hashtag == 1)
	{
		length += write(1, "0x", 2);
		length += putnbr_hex((unsigned int)arg, 16, uppercase);
	}
	else
		length += putnbr_hex((unsigned int)arg, 16, uppercase);
	return (length);
}

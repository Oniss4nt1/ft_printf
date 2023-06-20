#include "ft_printf.h"

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
	if (arg == 0)
		return (write(1, "0", 1));
	if (flags.hashtag == 1)
	{
		if (uppercase == 1)
			length += write(1, "0X", 2);
		else
			length += write(1, "0x", 2);
	}
	length += putnbr_hex(arg, 16, uppercase);
	return (index);
}

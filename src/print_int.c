#include "ft_printf.h"

int	putnbr_int(int arg, int base)
{
	int				length;
	unsigned int	absolute_arg;

	length = 0;
	if (arg < 0)
	{
		length += write(1, "-", 1);
		absolute_arg = (unsigned int)(arg * -1);
	}
	else
		absolute_arg = (unsigned int)arg;
	if (absolute_arg >= (unsigned int)base)
		length += putnbr_int((absolute_arg / base), base);
	ft_putchar(absolute_arg % base + '0');
	length++;
	return (length);
}

int	print_int(int arg, t_flags flags)
{
	int	length;

	length = 0;
	if (flags.plus == 1 && arg >= 0)
		length += write(1, "+", 1);
	length += putnbr_int(arg, 10);
	return (length);
}

#include "ft_printf.h"

int	print_unsign_int(unsigned int arg)
{
	int	length;
	int	digit;

	length = 0;
	if (arg >= 10)
		length += print_unsign_int((arg / 10));
	digit = (arg % 10) + '0';
	length += write(1, &digit, 1);
	return (length);
}

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	print_string(char *arg)
{
	int	length;

	length = 0;
	if (!arg)
		arg = "(null)";
	while (*arg)
	{
		length += write(1, arg, 1);
		arg++;
	}
	return (length);
}

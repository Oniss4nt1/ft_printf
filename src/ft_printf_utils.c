#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_specifier_length(const char *format)
{
	int	length;

	length = 1;
	if (*format == '%')
		format++;
	while (*format == '#' || *format == '0' || *format == '-' || *format == '+'
		|| *format == ' ')
	{
		format++;
		length++;
	}
	if (*format == 'c' || *format == 's' || *format == 'p' || *format == 'd'
		|| *format == 'i' || *format == 'u' || *format == 'x' || *format == 'X'
		|| *format == '%')
		length++;
	return (length);
}

void	active_flags(const char **format, t_flags *flags)
{
	char	flag;

	while (**format == '#' || **format == '0' || **format == '-'
		|| **format == '+' || **format == ' ')
	{
		flag = **format;
		if (flag == '#')
			flags->hashtag = 1;
		else if (flag == '+')
			flags->plus = 1;
		(*format)++;
	}
}

int	check_uppercase(const char format)
{
	if (format == 'X')
		return (1);
	return (0);
}

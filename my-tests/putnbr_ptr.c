#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	putnbr_hex(unsigned int arg, int base, int uppercase)
{
	int	length;

	length = 0;
	if (arg >= (unsigned int)base)
		length += putnbr_hex((arg / base), base, uppercase);
	if (arg % base < 10)
		ft_putchar(arg % base + '0');
	else
	{
		if (uppercase)
			ft_putchar(arg % base + 'A' - 10);
		else
			ft_putchar(arg % base + 'a' - 10);
	}
	length++;
	return (length);
}

int main(void)
{
	int hex = 1234567890;
    putnbr_hex(hex, 16, 1);
	return (0);
}
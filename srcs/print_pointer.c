#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	putnbr_ptr(unsigned long int num, int base)
{
	int	length;

	length = 0;
	if (num >= (unsigned long int)base)
		length += putnbr_ptr((num / base), base);
	if (num % base < 10)
		ft_putchar(num % base + '0');
	else
		ft_putchar(num % base + 'a' - 10);
	length++;
	return (length);
}

int	print_pointer(void *arg, int base)
{
	int	index;

	index = 0;
	if (!arg)
	{
		index += write(1, "0x0", 3);
		return (index);
	}
	index += write(1, "0x", 2);
	index += putnbr_ptr((unsigned long int)arg, base);
	return (index);
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
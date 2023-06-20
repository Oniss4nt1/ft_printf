/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:18:53 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/20 18:36:36 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_hex(unsigned int arg, int base, int uppercase);

/*
** Print_hex_d is a function that controls the printing of the hexadecimal.
** It returns the number of characters printed. The uppercase parameter
** is used to know if the specifier is uppercase or not. If it is uppercase, the
** function prints the number in uppercase. If the flag hashtag is set to 1, the
** function prints the prefix "0x" or "0X" before the number. 
*/

int	print_hex_d(unsigned int arg, int uppercase, t_flags flags)
{
	int	length;

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
	return (length);
}

/*
** Putnbr_hex is used to print the hexadecimal number. It is a recursive
** function that prints the number digit by digit. It returns the number of
** characters printed. If uppercase is set to 1, the function prints the number
** in uppercase. If it is set to 0, the function prints the number in lowercase.
*/

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


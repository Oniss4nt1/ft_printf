/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:17:28 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/20 18:57:20 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_int(int arg, int base);

/*
** Print_int is a function that controls the printing of the integer. 
** If the flag plus is set to 1, the function prints a '+' before the number. 
** If the flag space is set to 1, the function prints a ' ' before the number.
** Like original printf, is not possible to set both flags at the same time.
*/

int	print_int(int arg, t_flags flags)
{
	int	length;

	length = 0;
	if (flags.plus == 1 && arg >= 0)
		length += write(1, "+", 1);
	else if (flags.space == 1 && arg >= 0)
		length += write(1, " ", 1);
	length += putnbr_int(arg, 10);
	return (length);
}

/*
** Putnbr_int is used to print the integer. It is a recursive function that
** prints the number digit by digit. This difference to putnbr_hex is that
** putnbr_int can print negative numbers. Also, it returns the number of
** characters printed.
*/

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


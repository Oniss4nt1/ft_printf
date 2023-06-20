/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:26:32 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/20 19:05:41 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr_ptr(unsigned long int arg, int base);

/*
** Print_pointer is a function that controls the printing of the pointer.
** It returns the number of characters printed. The base parameter is used to set
** the base of the number (16). The function prints the prefix "0x" because it is
** the prefix of the pointer. It calls putnbr_ptr to print the number.
*/

int	print_pointer(unsigned long int arg, int base)
{
	int	length;

	length = 0;
	if (!arg)
	{
		length += write(1, "(nil)", 5);
		return (length);
	}
	length += write(1, "0x", 2);
	length += putnbr_ptr(arg, base);
	return (length);
}

/*
** Putnbr_ptr is used to print the pointer. It is a recursive function that
** prints the number digit by digit. This is the simplest putnbr function because
** it only prints positive numbers. It returns the number of characters printed.
*/

int	putnbr_ptr(unsigned long int arg, int base)
{
	int	length;

	length = 0;
	if (arg >= (unsigned long int)base)
		length += putnbr_ptr((arg / base), base);
	if (arg % base < 10)
		ft_putchar(arg % base + '0');
	else
		ft_putchar(arg % base + 'a' - 10);
	length++;
	return (length);
}



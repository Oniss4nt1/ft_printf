/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsign_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:14:03 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/20 19:06:32 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Print_unsign_int is a function that prints an unsigned integer to the standard
** output. It is a recursive function that prints the number digit by digit.
** It returns the number of characters printed.
*/

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:16:21 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/20 19:06:04 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Print_string is a function that prints a string to the standard output.
** If the string is NULL, it prints "(null)". It returns the number of
** characters printed.
*/

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:08:53 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/20 18:28:40 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Function that prints a character to the standard output.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Get_specifier_length is a function that returns the length of the specifier.
** It is used to know how many characters to skip in the string, between the
** '%' and the specifier.
*/

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

/*
** Active_flags is a function that 'activates' the flags. It checks if the
** character is a flag and if it is, it sets the flag to 1.
*/

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
		else if (flag == ' ')
			flags->space = 1;
		(*format)++;
	}
}

/* 
** Check_uppercase is a function that checks if the specifier is uppercase or
** not. It returns 1 if it is uppercase and 0 if it is not. This is necessary
** because the specifier 'x' and 'X' are the same, but the output is different.
*/

int	check_uppercase(const char format)
{
	if (format == 'X')
		return (1);
	return (0);
}

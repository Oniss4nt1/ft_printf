/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:30:09 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/21 15:54:10 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

/* This function is the main function of the ft_printf project. It takes a
** string as a parameter and prints it to the standard output. It returns the	
** number of characters printed.
*/

int	convert_specifiers(const char *format, va_list args, int index);

/*
** ft_printf is a variadic function, so it takes a variable number of arguments.
** The first argument is the string to be printed. The rest of the arguments
** are the values of the specifiers. The function also returns the number of
** characters printed.
*/

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		index;
	int		specifier_length;

	index = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			specifier_length = get_specifier_length(str);
			index += convert_specifiers(str, args, index);
			str += specifier_length;
		}
		else
		{
			index += write(1, str, 1);
			str++;
		}
	}
	va_end(args);
	return (index);
}

/*
** This function checks if the character is a valid specifier. If it is, it
** calls the function that prints the specifier. By the way, it also checks if
** the specifier hex is uppercase or not and 'activates' the flag.
*/

int	convert_specifiers(const char *format, va_list args, int index)
{
	int		upper;
	t_flags	flags;

	flags = (t_flags){0, 0, 0};
	index = 0;
	if (*format++ == '%')
	{
		active_flags(&format, &flags);
		upper = check_uppercase(*format);
		if (*format == 'c')
			index += print_char(va_arg(args, int));
		else if (*format == 's')
			index += print_string(va_arg(args, char *));
		else if (*format == 'p')
			index += print_pointer(va_arg(args, unsigned long int), 16);
		else if (*format == 'u')
			index += print_unsign_int(va_arg(args, unsigned int));
		else if (*format == 'd' || *format == 'i')
			index += print_int(va_arg(args, int), flags);
		else if (*format == 'x' || *format == 'X')
			index += print_hex_d(va_arg(args, unsigned long int), upper, flags);
		else if (*format == '%')
			index += print_percent();
	}
	return (index);
}

int main(void)
{
	printf("% +d", 12);
	return (0);
}

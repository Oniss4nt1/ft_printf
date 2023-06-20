/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunrodr <brunrodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:17:19 by brunrodr          #+#    #+#             */
/*   Updated: 2023/06/20 18:56:09 by brunrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Print_percent is a function that prints a '%' to the standard output.
** Uses two % because the first one is used to indicate that the next character
** is a specifier. This works like scape characters in C.
*/

int	print_percent(void)
{
	return (write(1, "%", 1));
}

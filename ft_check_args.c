/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:22:07 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/30 21:00:07 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_args(va_list args, char type, int *count)
{
	if (type == '%')
		ft_putchar('%', count);
	else if (type == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (type == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (type == 'd' || type == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (type == 'u')
		ft_unsigned_putnbr(va_arg(args, unsigned int), count);
	else if (type == 'x' || type == 'X')
		ft_Print_hexa(va_arg(args, unsigned int), type, count);
	else if (type == 'p')
		ft_print_ptr(va_arg(args, void *), 0, count);
}

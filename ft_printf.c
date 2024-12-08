/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:54:52 by abjellal          #+#    #+#             */
/*   Updated: 2024/12/08 08:48:32 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fixed_arg, ...)
{
	va_list	args;
	int		count;

	if (!fixed_arg)
		return (-1);
	count = 0;
	va_start(args, fixed_arg);
	while (*fixed_arg)
	{
		if (*fixed_arg == '%' && *(fixed_arg +1) == '\0')
			return (-1);
		if (*fixed_arg == '%')
		{
			fixed_arg++;
			if (*fixed_arg == '\0')
				break ;
			ft_check_args(args, *fixed_arg, &count);
		}
		else
			ft_putchar(*fixed_arg, &count);
		fixed_arg++;
	}
	va_end(args);
	return (count);
}

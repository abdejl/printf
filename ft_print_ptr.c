/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:27:15 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/30 21:02:01 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(void *pointer, int first_call, int *count)
{
	unsigned long	ptr;
	char		*base;

	ptr = (unsigned long)pointer;
	base = "0123456789abcdef";
	if (!ptr)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	if (first_call == 0)
	{
		ft_putstr("0x", count);
	}
	if (ptr >= 16)
	{
		ft_print_ptr((void *)(ptr / 16), 1, count);
	}
	ft_putchar(base[ptr % 16], count);
}

// #include <stdio.h>

// int main()
// {
//     char str = 'c';
//     char *ptr = &str;
//     int count = ft_printf("%p\n", ptr, 0);
//     printf("%d\n", count);
// }

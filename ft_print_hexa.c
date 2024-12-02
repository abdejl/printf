/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:17:18 by abjellal          #+#    #+#             */
/*   Updated: 2024/12/02 11:05:03 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(unsigned int nb, const char type, int *count)
{
	if (nb == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	if (nb >= 16)
		ft_print_hexa(nb / 16, type, count);
	if (nb % 16 <= 9)
		ft_putchar((nb % 16) + '0', count);
	else
	{
		if (type == 'x')
			ft_putchar((nb % 16) - 10 + 'a', count);
		else
			ft_putchar((nb % 16) - 10 + 'A', count);
	}
}

// #include <stdio.h>
// int main()
// {
//     int count = ft_printf("%X", 12344, 'X', &count);
//     printf("\n%d\n",count);
// }

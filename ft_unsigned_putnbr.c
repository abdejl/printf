/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:52:04 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/30 21:09:31 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_putnbr(unsigned int nb, int *count)
{
	if (nb > 9)
	{
		ft_unsigned_putnbr(nb / 10, count);
		ft_unsigned_putnbr(nb % 10, count);
	}
	else
		ft_putchar(nb + '0', count);
}

// #include<stdio.h>
// int main()
// {
//      int count = ft_printf("%d\n", 1234);
//      printf("Characters printed: %d\n", count);
// }

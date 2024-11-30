/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:02:04 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/22 11:24:33 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(int nb, int *count)
{
    if (nb == -2147483648)
    {
       ft_putstr("-2147483648", count);
       return ;
    }
    if (nb < 0)
    {
       
        ft_putchar('-', count);
        nb = -nb;
        
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10, count);
        ft_putnbr(nb % 10, count);
    }
    else
    ft_putchar(nb + '0', count);
}

// #include <stdio.h>
// int main()
// {
//    int count = ft_printf("%d\n", 1234);
//     printf("Characters printed: %d\n", count);

// }

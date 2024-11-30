/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:34:32 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/22 15:50:54 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr(char *str, int *count)
{
    int i;

    i = 0;
    if (str == NULL)
    str = "(null)";
    while (str[i])
    {
        write(1, &str[i], 1);
        (*count)++;
        i++;
    }
}

// #include<stdio.h>
// int main()
// {
//     int count = ft_printf("%s\n","hello", count);
//     printf("%d", count);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abjellal <abjellal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:58:09 by abjellal          #+#    #+#             */
/*   Updated: 2024/11/23 11:53:59 by abjellal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

void    ft_putchar(char c, int *count);
void    ft_putnbr(int nb, int *count);
void    ft_putstr(char *str, int *count);
void    ft_unsigned_putnbr(unsigned int nb, int *count);
void    ft_print_ptr(void *pointer, int first_call, int *count);
void   ft_Print_hexa(unsigned int nb, const char type, int *count);
void    ft_check_args(va_list args, const char type, int *count);
int ft_printf(const char *str, ...);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:26:48 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/21 17:57:26 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

#include <stdarg.h>
#include <stdio.h>

// essentials :
void	ft_putchar(char c);
int		ft_isprint(char c);
void	ft_putnbr(long int nb);
int		ft_strlen(char *str);

// ft_convert_part1 :
int	ft_char(va_list arg);
int	ft_str(va_list arg);
int	ft_ptr(va_list arg);
int	ft_decimal(va_list arg);
int	ft_integer(va_list arg);

// ft_convert_part2 :
int	ft_unsigned(va_list arg);
int	ft_hexa(va_list arg);
int	ft_percent(va_list arg);


#endif
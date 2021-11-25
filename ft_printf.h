/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:26:48 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/25 17:34:14 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

// essentials :
void	ft_putchar(char c);
int		ft_isprint(char c);
int		ft_putnbr(long int nb);
int		ft_strlen(char *str);
void	ft_putstr(char *s);
void	ft_putnbr_base(unsigned long long nbr, char *base, int *len);

// ft_convert_part1 :
int		ft_char(va_list arg);
int		ft_str(va_list arg);
int		ft_ptr(va_list arg);
int		ft_decimal(va_list arg);
int		ft_integer(va_list arg);

// ft_convert_part2 :
int		ft_unsigned(va_list arg);
int		ft_hexa(va_list arg);
int		ft_upphexa(va_list arg);
int		ft_percent(const char *str);

//printf
int		ft_printf(const char *str, ...);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:26:42 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/21 15:58:33 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static	int	convert_call(const char *str, va_list arg, int len)
{
	str++;
	if (*str == 'c')
		len += ft_char(arg);
	else if (*str == 's')
		len += ft_str(arg);
	// else if (*str == 'p')
	// 	len += ft_ptr(arg);
	else if (*str == 'd')
			len += ft_decimal(arg);
	// else if (*str + 1 == 'i')
		// 	len += ft_integer(arg);
	// else if (*str + 1 == 'u')
		// 	len += ft_unsigned(arg);
	// else if (*str + 1 == 'x')
		// 	len += ft_hexa(arg);
	// else if (*str + 1 == '%')
		// 	len += ft_percent(arg);
	return (len);
}

static int	str_parsing(const char *str, va_list arg)
{
	int len;

	len = 0;
	while (*str)
	{
		while (ft_isprint(*str) && *str != '%')
		{
			ft_putchar(*str);
			len++;
			str++;
		}
		if (*str == 10)
			ft_putchar(10);
		if (*str == '%')
		{
			len = convert_call(str, arg, len);
			str++;
		}
		str++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list arg;

	va_start(arg, str);
	len = str_parsing(str, arg);

	return (len);
}

int	main()
{
	int d = -147;
	
	ft_printf("ft_printf str : %d\n", d);
	printf("printf str : %d\n", d);
}
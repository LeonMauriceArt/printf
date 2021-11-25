/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:26:42 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/25 17:33:49 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	convert_call(const char *str, va_list arg)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len += ft_char(arg);
	else if (*str == 's')
		len += ft_str(arg);
	else if (*str == 'p')
		len += ft_ptr(arg);
	else if (*str == 'd')
		len += ft_decimal(arg);
	else if (*str == 'i')
		len += ft_integer(arg);
	else if (*str == 'u')
		len += ft_unsigned(arg);
	else if (*str == 'x')
			len += ft_hexa(arg);
	else if (*str == 'X')
			len += ft_upphexa(arg);
	else
		len += ft_percent(str);
	return (len);
}

static int	str_parsing(const char *str, va_list arg)
{
	int	len;

	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += convert_call(str, arg);
		}
		else
		{
			ft_putchar(*str);
			len++;
		}
		str++;
	}
	va_end(arg);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	arg;

	va_start(arg, str);
	len = str_parsing(str, arg);
	va_end(arg);
	return (len);
}

// int main()
// {
// 	ft_printf("LalaP%%yup");
// 	printf("\n");
// 	printf("LalaP%%yup");
// }
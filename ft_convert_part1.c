/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_part1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:43:24 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/25 17:34:27 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(va_list arg)
{
	char	c;

	c = va_arg(arg, int);
	ft_putchar(c);
	return (1);
}

int	ft_str(va_list arg)
{
	char	*str;

	str = va_arg (arg, char *);
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_ptr(va_list arg)
{
	unsigned long long	address;
	int					len;

	len = 0;
	ft_putstr("0x");
	address = (unsigned long long)va_arg (arg, void *);
	ft_putnbr_base(address, "0123456789abcdef", &len);
	len += 2;
	return (len);
}

int	ft_decimal(va_list arg)
{
	int	nb;
	int	len;

	nb = va_arg(arg, int);
	len = ft_putnbr(nb);
	return (len);
}

int	ft_integer(va_list arg)
{
	int	nb;
	int	len;

	nb = va_arg(arg, int);
	len = ft_putnbr(nb);
	return (len);
}

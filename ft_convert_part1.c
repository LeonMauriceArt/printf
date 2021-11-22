/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_part1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:43:24 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/21 17:58:23 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_char(va_list arg)
{
	char 	c;

	c = va_arg(arg, int);
	ft_putchar(c);
	return (1);
}

int	ft_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	ft_putstr(str);
	return (ft_strlen(str));
}

// int	ft_ptr(va_list arg)
// {
// 	void *address;
// 	char	*str;
// 	int i;

// 	i = 0;
// 	ft_putstr_fd("0x", 1);
// 	address = va_arg(arg, void*);
// 	while (address[i])
// 	{

// 	}
// 	str = ft_itoa(address);
// 	ft_putstr_fd(str, 1);
// 	return (1);
// }

int	ft_decimal(va_list arg)
{
	int	dec;
	int	len;

	len = 0;
	dec = va_arg(arg, int);
	ft_putnbr(dec);
	if (dec < 0)
	{
		len++;
		dec *= -1;
	}
	while (dec > 0)
	{
		len++;
		dec = dec / 10;
	}
	return (len);
}

// int	ft_integer(va_list arg)
// {
	
// }
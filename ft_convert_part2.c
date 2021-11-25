/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_part2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 10:43:21 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/25 17:34:33 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(va_list arg)
{
	unsigned int	nb;
	int				len;

	nb = va_arg(arg, unsigned int);
	len = ft_putnbr(nb);
	return (len);
}

int	ft_hexa(va_list arg)
{
	unsigned int	nb;
	int				len;

	len = 0;
	nb = va_arg (arg, unsigned int);
	ft_putnbr_base(nb, "0123456789abcdef", &len);
	return (len);
}

int	ft_upphexa(va_list arg)
{
	unsigned int	nb;
	int				len;

	len = 0;
	nb = va_arg(arg, unsigned int);
	ft_putnbr_base(nb, "0123456789ABCDEF", &len);
	return (len);
}

int	ft_percent(const char *str)
{
	ft_putchar(*str);
	return (1);
}

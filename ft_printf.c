/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:26:42 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/19 17:08:52 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// int		num_of_args(char const *str)
// {
	
// }

// char	*ft_str(va_list argptr)
// {
	
	
// }

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_char(va_list ag)
{
	int		len;
	char 	c;

	len = 0;
	c = va_arg(ag, int);
	ft_putchar(c);
	return (len);
}

int	str_parsing(const char *str, va_list ag)
{
	int len;

	len = 0;
	while (*str)
	{
		while(ft_isprint(*str) && *str != '%')
		{
			ft_putchar(*str);
			len++;
			str++;
		}
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				len = ft_char(ag);
			// if (str++ == 's')
			// 	ft_str(ag);
		}
		str++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list ag;

	va_start(ag, str);
	len = str_parsing(str, ag);

	return (len);
}

int	main()
{
	ft_printf("Mon char marche regarde : %c", 'B');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 14:26:42 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/19 19:57:02 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

// int		num_of_args(char const *str)
// {
	
// }


void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_str(va_list ag)
{
	char *str;

	str = va_arg(ag, char*);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_char(va_list ag)
{
	char 	c;

	c = va_arg(ag, int);
	ft_putchar(c);
	return (1);
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
				len += ft_char(ag);
			else if (*str == 's')
				len += ft_str(ag);
			else if (*str == 'p')

			else if (*str == 'd')
			
			else if (*str == 'i')

			else if (*str == 'u')

			else if (*str == 'x')

			else if (*str == '%')
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
	char *str = "Popololod";
	
	ft_printf("Mon str : %s\n", str);
	printf("str : %s", str);
}
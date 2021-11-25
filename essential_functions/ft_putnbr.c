/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:47:31 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/25 17:34:57 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static	void	print_nbr(long int nb)
{
	if (nb > 9)
	{
		print_nbr(nb / 10);
		print_nbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_putnbr(long int n)
{
	long int	ln;
	int			len;

	len = 0;
	ln = n;
	if (ln == 0)
		len = 1;
	if (ln < 0)
	{
		len++;
		ft_putchar('-');
		ln *= -1;
	}
	print_nbr(ln);
	while (ln > 0)
	{
		len++;
		ln = ln / 10;
	}
	return (len);
}

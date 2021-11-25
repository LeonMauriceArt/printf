/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:33:35 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/25 17:34:51 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	basecheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if ((base[i] == '+') || (base[i] == '-'))
			return (1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && j != i)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(unsigned long long nbr, char *base, int *len)
{
	unsigned long long	nb;
	unsigned int		baselen;

	baselen = ft_strlen(base);
	nb = nbr;
	if (baselen > 1 && basecheck(base) == 0)
	{
		if (nb < 0)
		{
			nb *= -1;
			nb = 4294967295 - nb + 1;
		}
		if (nb >= baselen)
		{
			ft_putnbr_base (nb / baselen, base, len);
			ft_putnbr_base (nb % baselen, base, len);
		}
		else
		{
			(*len)++;
			write(1, &(base[nb]), 1);
		}
	}
}

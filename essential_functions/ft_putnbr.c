/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaurin- <lmaurin-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:47:31 by lmaurin-          #+#    #+#             */
/*   Updated: 2021/11/21 17:51:13 by lmaurin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_putnbr_fd(int n)
{
	long int	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar ('-');
		ln *= -1;
	}
	print_nbr(ln);
}
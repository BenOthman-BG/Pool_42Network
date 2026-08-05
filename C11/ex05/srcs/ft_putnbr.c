/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:59:34 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/05 12:59:37 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(long nb)
{
	if (nb < 10)
	{
		write(1, &"0123456789"[nb], 1);
		return ;
	}
	write_nbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

void	ft_putnbr(int nb, int b, char c)
{
	long	nbr;

	if (c == '/' && b == 0)
	{
		write(1, "Stop : division by zero", 23);
		return ;
	}
	if (c == '%' && b == 0)
	{
		write(1, "Stop : modulo by zero", 21);
		return ;
	}
	nbr = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	write_nbr(nbr);
}

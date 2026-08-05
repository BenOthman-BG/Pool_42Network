/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:35:20 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/15 16:53:02 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int a, int b)
{
	char	c;

	c = '0' + a / 10;
	write(1, &c, 1);
	c = '0' + (a % 10);
	write(1, &c, 1);
	write(1, " ", 1);
	c = '0' + b / 10;
	write(1, &c, 1);
	c = '0' + (b % 10);
	write(1, &c, 1);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchars(a, b);
			b++;
		}
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:08:41 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/15 17:32:29 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_categorie(int nbr)
{
	int	categorie;

	categorie = 1;
	while (nbr >= 10 || nbr <= -10)
	{
		nbr = nbr / 10;
		categorie = categorie * 10;
	}
	return (categorie);
}

void	ft_putnbr(int nb)
{
	char	c;
	int		categorie;

	categorie = find_categorie(nb);
	if (nb < 0)
		write(1, "-", 1);
	while (categorie >= 1)
	{
		if (nb < 0)
			c = '0' + ((nb / categorie) * (-1));
		if (nb >= 0)
			c = '0' + (nb / categorie);
		write(1, &c, 1);
		nb = nb % categorie;
		categorie = categorie / 10;
	}
}

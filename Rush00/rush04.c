/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 14:54:57 by himekkao          #+#    #+#             */
/*   Updated: 2026/07/18 16:30:31 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	check_a(int ligne, int colone, int x, int y)
{
	if (x == 1 && y == 1)
		return (1);
	if (ligne == y && x == 1)
		return (0);
	if (colone == x && y == 1)
		return (0);
	if ((ligne == 1 && colone == 1) || (ligne == y && colone == x))
		return (1);
	return (0);
}

int	check_c(int ligne, int colone, int x, int y)
{
	if ((ligne == 1 && colone == x) || (ligne == y && colone == 1))
		return (1);
	return (0);
}

int	check_espace(int ligne, int colone, int x, int y)
{
	if (ligne != 1 && ligne != y && colone != 1 && colone != x)
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int	ligne;
	int	colone;

	ligne = 1;
	colone = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (ligne <= y)
	{
		colone = 1;
		while (colone <= x)
		{
			if (check_a(ligne, colone, x, y))
				ft_putchar('A');
			else if (check_c(ligne, colone, x, y))
				ft_putchar('C');
			else if (check_espace(ligne, colone, x, y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			colone++;
		}
		ft_putchar('\n');
		ligne++;
	}
}

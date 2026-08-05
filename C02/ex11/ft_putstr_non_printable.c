/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 18:14:54 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/18 20:04:53 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	help(int *a)
{
	int	x;

	x = *a % 16;
	*a = *a / 16;
	return (x);
}

void	ft_putbase(int *table)
{
	char	c;
	int		i;

	i = 0;
	while (i < 2)
	{
		if (table[i] >= 10)
			c = 'Y' + table[i] - 2;
		else
			c = '0' + table[i];
		write(1, &c, 1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		a;
	int		table[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			a = (unsigned char) str[i];
			table[1] = help(&a);
			table[0] = help(&a);
			write(1, "\\", 1);
			ft_putbase(table);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

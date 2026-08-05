/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:59:44 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/05 12:59:47 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_calculate(int a, int b, char op)
{
	int		(*f[5])(int, int);
	char	*c;
	int		i;

	f[0] = add;
	f[1] = sub;
	f[2] = mul;
	f[3] = div;
	f[4] = mod;
	c = "+-*/%";
	i = 0;
	while (i < 5)
	{
		if (c[i] == op)
		{
			ft_putnbr(f[i](a, b), b, c[i]);
			write(1, "\n", 1);
			return ;
		}
		i++;
	}
	write(1, "0\n", 2);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	if (av[2][1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	ft_calculate(a, b, av[2][0]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 14:32:24 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/26 14:36:50 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	getNumber(char c)
{
	return (c - '0');
}

int	main(int argc, char **argv)
{
	int number;
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	number = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				number = number + getNumber(argv[i][j]);
			j++;
		}
		i++;
	}
	printf("%d", number);
}

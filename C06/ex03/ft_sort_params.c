/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 10:36:13 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/27 13:09:15 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str2[i] != '\0')
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}

void	ft_swap(char **argv, int i, int min)
{
	char	*tmp;

	tmp = argv[i];
	argv[i] = argv[min];
	argv[min] = tmp;
}

void	ft_putstr(char **argv)
{
	while (*argv)
	{
		while (**argv != '\0')
		{
			write(1, *argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
		argv++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < argc - 1)
	{
		min = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[min], argv[j]) > 0)
				min = j;
			j++;
		}
		ft_swap(argv, i, min);
		i++;
	}
	argv++;
	ft_putstr(argv);
	return (0);
}

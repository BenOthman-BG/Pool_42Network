/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 14:19:27 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/23 16:40:27 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	get_index(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	base_convert(char *str, char *base, int signe, int size)
{
	int	number;
	int	index;

	number = 0;
	while (*str)
	{
		index = get_index(*str, base);
		if (index == -1)
			return (number * signe);
		number = number * size + index;
		str++;
	}
	return (number * signe);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signe;
	int	number;
	int	size;

	size = check_base(base);
	signe = 1;
	if (size == 0)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe *= (-1);
		str++;
	}
	number = base_convert(str, base, signe, size);
	return (number);
}

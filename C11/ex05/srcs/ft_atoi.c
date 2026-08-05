/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:59:20 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/05 12:59:22 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	signe;
	int	number;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	signe = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe *= (-1);
		str++;
	}
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * signe);
}

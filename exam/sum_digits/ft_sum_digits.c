/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 12:55:56 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/26 13:05:01 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_getnumber(char c)
{
	return (c - '0');
}
int	sum_digits(char *str)
{
	int	sum;
	sum = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			sum = sum + ft_getnumber(*str);
		}
		str++;
	}
	return (sum);
}

int main ()
{
	int a;

	a = sum_digits("");
	printf("%d", a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <obenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 11:54:00 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/05 11:54:03 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*p;
	int	i;

	p = malloc(sizeof(int) * length);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		p[i] = f(tab[i]);
		i++;
	}
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 15:26:44 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/30 17:16:40 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		nbr;
	int		*ptr;
	int		i;

	if (min >= max)
		return (NULL);
	nbr = max - min;
	ptr = malloc(sizeof(int) * nbr);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}

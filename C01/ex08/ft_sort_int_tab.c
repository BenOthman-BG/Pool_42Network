/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:49:50 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/16 14:35:54 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;
	int	min;

	i = 0;
	while (i < size - 1)
	{
		min = tab[i];
		j = i + 1;
		while (j < size)
		{
			if (min > tab[j])
			{
				tmp = min;
				min = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		tab[i] = min;
		i++;
	}
}

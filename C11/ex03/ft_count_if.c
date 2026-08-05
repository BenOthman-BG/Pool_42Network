/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:47:41 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/05 12:48:09 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (i < length)
	{
		if (f(tab[i]))
			counter++;
		i++;
	}
	return (counter);
}

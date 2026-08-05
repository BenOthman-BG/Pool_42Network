/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:55:10 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/29 16:41:34 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_fill_in(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*str = strs[i][j];
			j++;
			str++;
		}
		j = 0;
		while (i < (size - 1) && sep[j] != '\0')
		{
			*str = sep[j];
			j++;
			str++;
		}
		i++;
	}
	*str = '\0';
}

int	get_len(int size, char **strs)
{
	int	i;
	int	j;
	int	total_len;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			total_len++;
		}
		i++;
	}
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		total_len;
	int		sep_len;

	if (size <= 0)
	{
		str = malloc(1 * sizeof(char));
		if (str != NULL)
			str[0] = '\0';
		return (str);
	}
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	total_len = get_len(size, strs) + (sep_len * (size - 1)) + 1;
	str = malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_fill_in(size, strs, sep, str);
	return (str);
}

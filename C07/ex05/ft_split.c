/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 09:54:14 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/30 14:11:16 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_in(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	get_len(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (is_in(str[i], charset) && str[i])
			i++;
		if (str[i] == '\0')
			break ;
		len++;
		while ((is_in(str[i], charset) != 1) && str[i])
			i++;
	}
	return (len);
}

int	get_strlen(char *str, char *charset, int *p)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	len = 0;
	j = 0;
	while (is_in(str[i], charset) && str[i])
	{
		i++;
		j++;
	}
	*p = j;
	while ((is_in(str[i], charset) != 1) && str[i])
	{
		len++;
		i++;
	}
	return (len);
}

void	ft_strncpy(char *to_copy, char *str, int len)
{
	int	i;

	i = 0;
	while (i < len && str[i])
	{
		to_copy[i] = str[i];
		i++;
	}
	to_copy[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		len;
	int		i;
	int		p;
	int		str_len;

	len = get_len(str, charset);
	array = malloc (sizeof(char *) * (len + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_len = get_strlen(str, charset, &p);
		array[i] = malloc (sizeof(char) * (str_len + 1));
		if (array[i] == NULL)
			return (NULL);
		ft_strncpy(array[i], str + p, str_len);
		str = str + str_len + p;
		i++;
	}
	array[i] = NULL;
	return (array);
}

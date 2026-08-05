/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 16:55:20 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/03 18:40:44 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *charset, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && is_charset(charset, str[i]) != 1)
		i++;
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != '\0' && is_charset(charset, str[i]))
			i++;
		if (str[i] == '\0')
			break ;
		len++;
		while (str[i] != '\0' && is_charset(charset, str[i]) != 1)
			i++;
	}
	return (len);
}

void	putstr(char *str_to, char *str_from, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str_to[i] = str_from[i];
		i++;
	}
	str_to[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		j;
	int		len;

	arr = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (*str)
	{
		while (*str && is_charset(charset, *str))
			str++;
		if (*str == '\0')
			break ;
		len = ft_strlen(charset, str);
		arr[j] = malloc (sizeof(char) * (len + 1));
		if (arr[j] == NULL)
			return (NULL);
		putstr(arr[j], str, len);
		str = str + len;
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

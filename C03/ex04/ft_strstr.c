/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 20:52:25 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/21 11:21:29 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int i, char *str, char *to_find)
{
	int	j;

	j = 0;
	while (str[i] == to_find[j] && to_find[j] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == *to_find)
		{
			j = check(i, str, to_find);
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

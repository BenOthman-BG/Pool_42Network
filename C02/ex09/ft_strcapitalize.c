/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 09:57:46 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/20 13:36:56 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change(char *str, char a, char b, int x)
{
	if (*str >= a && *str <= b)
		*str = *str + (x);
}

int	check_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	check_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((check_lowercase(str[i]) || check_uppercase(str[i])) && j == 0)
		{
			ft_change(&str[i], 'a', 'z', -32);
			j = 1;
		}
		else if ((check_lowercase(str[i]) || check_uppercase(str[i])) && j == 1)
			ft_change(&str[i], 'A', 'Z', 32);
		else if (str[i] >= '0' && str[i] <= '9')
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

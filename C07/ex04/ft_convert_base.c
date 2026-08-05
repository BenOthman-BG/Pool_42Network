/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:00:27 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/30 13:43:26 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *base);

void	write_base(unsigned int nbr, int size, char *base, char *str)
{
	while (nbr / size != 0)
	{
		*str = base[nbr % size];
		str--;
		nbr = nbr / size;
	}
	*str = base[nbr % size];
}

int	get_len(int nbr, int size)
{
	if (nbr / size == 0)
		return (1);
	return (1 + get_len(nbr / size, size));
}

void	ft_putnbr_base(int nbr, int len, char *base, char *str)
{
	int				size;
	unsigned int	numb;

	numb = (unsigned int) nbr;
	size = check_base(base);
	if (nbr < 0)
	{
		str[0] = '-';
		numb = - (unsigned int) nbr;
	}
	str[len] = '\0';
	write_base(numb, size, base, &str[len - 1]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		get_number;
	char	*str;
	int		len;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	get_number = ft_atoi_base(nbr, base_from);
	len = get_len(get_number, check_base(base_to));
	if (get_number < 0)
		len++;
	str = malloc(len * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	ft_putnbr_base(get_number, len, base_to, str);
	return (str);
}

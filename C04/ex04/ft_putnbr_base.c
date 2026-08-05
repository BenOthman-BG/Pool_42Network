/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 09:29:37 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/27 11:56:23 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	write_base(unsigned int nbr, int size, char *base)
{
	if (nbr / size == 0)
		return (nbr % size);
	write(1, &base[write_base(nbr / size, size, base)], 1);
	return (nbr % size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				size;
	unsigned int	numb;

	numb = (unsigned int) nbr;
	size = check_base(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		numb = - (unsigned int) nbr;
	}
	write(1, &base[write_base(numb, size, base)], 1);
}

int main ()
{
	ft_putnbr_base(10767, "0123456789abcdef");
}

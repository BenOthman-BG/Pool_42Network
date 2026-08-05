/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 20:33:05 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/20 11:45:15 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthex(int value)
{
	char	c;

	if (value >= 10)
		c = 'Y' + value - 2;
	else
		c = '0' + value;
	write(1, &c, 1);
}

void	first_adress_print(long unsigned int addr_val)
{
	int		i;
	char	buffer[16];

	i = 15;
	while (i >= 0)
	{
		if (addr_val % 16 < 10)
			buffer[i] = '0' + (addr_val % 16);
		else
			buffer[i] = 'Y' + (addr_val % 16) - 2;
		addr_val = addr_val / 16;
		i--;
	}
	write(1, buffer, 16);
	write(1, ": ", 2);
}

void	ft_print_char_in_hex(char *str, unsigned int size)
{
	unsigned int	i;
	int				value;

	i = 0;
	while (i < 16)
	{
		if (i >= size)
			write(1, "  ", 2);
		else
		{
			value = (unsigned char) str[i];
			ft_puthex(value / 16);
			ft_puthex(value % 16);
		}
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_char(unsigned int offset, char *str, unsigned int size)
{
	int	i;

	i = 0;
	while (i < 16 && (i + offset) < size)
	{
		if (str[i + offset] < 32 || str[i + offset] >= 127)
			write(1, ".", 1);
		else
			write(1, &str[i + offset], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned int	offset;

	if (size == 0)
		return (addr);
	offset = 0;
	str = (char *) addr;
	while (offset < size)
	{
		first_adress_print((unsigned long)str + offset);
		ft_print_char_in_hex(str + offset, size - offset);
		ft_print_char(offset, str, size);
		offset += 16;
		write(1, "\n", 1);
	}
	return (addr);
}

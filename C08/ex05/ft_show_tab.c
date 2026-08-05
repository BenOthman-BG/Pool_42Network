/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <obenyahy@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:46:16 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/02 09:46:20 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int a)
{
	if (a < 10)
	{
		write(1, &"0123456789"[a], 1);
		return ;
	}
	ft_putnbr(a / 10);
	write(1, &"0123456789"[a % 10], 1);
}

void	ft_printstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_printstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_printstr(par[i].copy);
		i++;
	}
}

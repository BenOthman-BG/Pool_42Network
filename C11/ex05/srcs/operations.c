/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:59:54 by obenyahy          #+#    #+#             */
/*   Updated: 2026/08/05 12:59:56 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int	mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}

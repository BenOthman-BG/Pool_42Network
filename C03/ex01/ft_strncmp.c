/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 19:04:39 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/20 19:12:39 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (s1[counter] != '\0' && s1[counter] == s2[counter] && counter < n - 1)
		counter++;
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}

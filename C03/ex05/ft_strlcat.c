/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obenyahy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 11:42:15 by obenyahy          #+#    #+#             */
/*   Updated: 2026/07/21 12:34:25 by obenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	i;

	src_size = 0;
	dest_size = 0;
	while (src[src_size])
		src_size++;
	while (dest_size < size && dest[dest_size] != '\0')
		dest_size++;
	if (dest_size == size)
		return (src_size + size);
	i = 0;
	while ((dest_size + i) < (size - 1) && src[i] != '\0')
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}

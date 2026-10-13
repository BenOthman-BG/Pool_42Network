#include <stdio.h>
#include <stdlib.h>

int	get_size (int nbr)
{
	if (nbr / 10 == 0)
		return (1);
	return (1 + get_size(nbr / 10));
}

void	ft_putstr(char *str, int nbr, int size)
{
	int	i;
	int	a;
	long	n;
	int	j;

	i = 1;
	a = 1;
	j = 0;
	n = nbr;
	if (nbr < 0)
	{
		str[j] = '-';
		j++;
		size--;
		n = nbr * (-1);
	}
	while (i < size)
	{
		a = a * 10;
		i++;
	}
	while (a >= 1)
	{
		str[j] = n / a + '0';
		n = n % a;
		a = a / 10;
		j++;
	}
	str[j] = '\0';
}

char	*ft_itoa(int nbr)
{
	char	*ptr;
	int		size;

	size = get_size(nbr);
	if (nbr < 0)
		size++;
	ptr = malloc (sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_putstr(ptr, nbr, size);
	return (ptr);
}

int main ()
{
	char	*ptr;

	ptr = ft_itoa(-88);
	if (ptr != NULL)
	{
		printf(" \"%s\" ", ptr);
	}
	free(ptr);
	return (0);
}

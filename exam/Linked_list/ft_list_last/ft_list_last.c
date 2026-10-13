#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		counter;
	t_list	*position;

	position = begin_list;
	counter = 0;
	while (position != NULL)
	{
		counter++;
		position = position -> next;
	}
	return (counter);
}

t_list *ft_list_last(t_list *begin_list)
{
	int		size;
	int 	i;
	t_list	*p;

	size = ft_list_size(begin_list);
	p = begin_list;
	i = 1;
	while (i < size)
	{
		p = p -> next;
		i++;
	}
	return (p);
}

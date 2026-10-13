#include "ft_list.h"
#include <stdlib.h>

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

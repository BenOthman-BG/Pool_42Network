#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
		t_list *node;

		node = (t_list *) malloc (sizeof(t_list));
		if (node == NULL)
			return ;
		node -> data = data;
		node -> next = *begin_list;
		*begin_list = node;
}

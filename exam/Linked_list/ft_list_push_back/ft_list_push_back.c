#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*get_node;

	node = (t_list *) malloc (sizeof(t_list));
	if (node == NULL)
		return ;
	node -> data = data;
	node -> next = NULL;
	get_node = *begin_list;
	if (*begin_list == NULL)
	{
		*begin_list = node;
	}
	else
	{
		while (get_node -> next != NULL)
		{
			get_node = get_node -> next;
		}
		get_node -> next = node;
	}
}

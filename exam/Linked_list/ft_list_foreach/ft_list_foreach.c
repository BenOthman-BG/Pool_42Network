#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_print_list (void *p)
{
	char *str;

	str = (char *) p;
	printf("L1 - %s\n", str);
}

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

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*p;

	p = begin_list;
	while (p != NULL)
	{
		f(p -> data);
		p = p -> next;
	}
}

int main ()
{
	t_list *head;

	head = NULL;
	ft_list_push_front(&head, "1337");
	ft_list_push_front(&head, "is");
	ft_list_push_front(&head, "the");
	ft_list_push_front(&head, "best");
	ft_list_push_front(&head, "school");

	ft_list_foreach(head, ft_print_list);
}

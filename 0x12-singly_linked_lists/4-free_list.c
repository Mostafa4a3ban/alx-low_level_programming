#include "lists.h"
#include <stdlib.h>

/**
 ** free_list - to free it as a list_t list.
 ** @head:    pointer to the list_t list.
 **/
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

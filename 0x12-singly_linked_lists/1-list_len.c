#include "lists.h"
/**
 ** list_len - to find the number of elements
 ** @h: linked thing
 **
 ** Return: num of elements
 **/
size_t list_len(const list_t *h)
{
	size_t elements = 0;


	while (h)
	{
		elements++;
		h = h -> next;
	}
	return (elements);
}

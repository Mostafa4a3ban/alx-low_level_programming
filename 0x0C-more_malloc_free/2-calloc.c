#include <stdlib.h>
#include "main.h"

/**
 ** _calloc - simulate the calloc function
 ** @nmemb: number of elements
 ** @size: the size of each
 ** Return: Null when errors happen and pointer to the buffer on success
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	buffer = malloc(size * nmemb);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		*(buffer + i) = 0;

	return (buffer);
}

#include <stdlib.h>
#include "main.h"

/**
 ** *_realloc - reallocates a memory block using malloc and free
 ** @ptr: pointer to the memory previsouly allocated by malloc
 ** @old_size: size of the allocated r
 ** @new_size: new size of the new memory block
 **
 ** Return: pointer to the newly allocated memory block
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *buffer, *tmp;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return  (ptr);

	buffer = malloc(sizeof(char) * new_size);
	if (buffer == NULL)
		return (NULL);
	tmp = (char *) ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			buffer[i] = tmp[i];
		free(ptr);
		return ((void *) buffer);
	}
	
	for (i = 0; i < old_size; i++)
		buffer[i] = tmp[i];
	free(ptr);
	
	return ((void *) buffer);
}

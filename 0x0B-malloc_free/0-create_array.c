#include "main.h"
#include <stdlib.h>
/**
 * *create_array -to create an array
 * @size: to carry size
 * @c: to carry
 * Return: \0 if size = 0 and
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * sizeof(char));
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

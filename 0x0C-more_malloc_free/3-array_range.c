#include "main.h"
#include <stdlib.h>

/**
 ** array_range - creates an array of integers
 **
 ** @min: minimum integer
 ** @max: maximum integer
 **
 ** Return: pointer to newly created array
 **/
int *array_range(int min, int max)
{
	int *buffer;
	int i, j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	buffer = malloc(sizeof(int) * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		buffer[i] = j;

	return (buffer);
}

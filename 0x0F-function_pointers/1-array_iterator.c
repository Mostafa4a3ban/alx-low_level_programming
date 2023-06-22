#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - to iterate
 *
 * @size: size of array
 * @array: the arrray
 *
 * Return: no return
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

#include "main.h"

/**
  *print_triangle - to print a triangle
  *@size: to see the size of triangle
  *
  **/
void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
		j = 0;
		while (j < size - i)
		{
			_putchar(' ');
			j++;
		}
		j = 0;
		while (j < i)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
	_putchar('\n');
}

#include "main.h"

/**
  *print_diagonal - to print it diagonal
  *@n: to count diagonals
  *
  **/
void print_diagonal(int n)
{
	int i = 0, count = 0;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		for (count = 1; count < i; count++)
		{
			_putchar(' ');
		}
		_putchar('/');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}

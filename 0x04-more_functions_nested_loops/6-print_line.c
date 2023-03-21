#include "main.h"

/**
  *print_line - print a line of _
  *@n: number of lines
  **/
void print_line(int n)
{
	int i = 0;

	while (i >= 0 && i < n)
	{

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
_putchar('\n');
}


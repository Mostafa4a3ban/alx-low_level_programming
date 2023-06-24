#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function prints numbers
 * @separator:is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i, j;

	j = 0;
	va_start(list, n);
	if (separator != 0)
	{
		for (i = 0; i < (int)n; i++)
		{
			printf("%d", va_arg(list, int));
			if (j < (int)(n - 1))
			{
				printf("%s", separator);
				j++;
			}
		}
		printf("\n");
	}
	va_end(list);
}

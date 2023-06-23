#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - summation
 * @n: number of args
 *
 *Return: return rhe summation.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int s, i;

	va_start(list, n);


	s = 0;
	for (i = 0; i < (int)n; i++)
	{
		s += va_arg(list, int);
	}
	va_end(list);
	return (s);
}

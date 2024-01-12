#include "main.h"

/**
 *factorial - to get the factorial
 *
 *@n: the number factor
 *Return: 0, -1, or factorial
 */
int factorial(int n)
{
	int x;

	if (n > 0)
	{
		x = n * factorial(n - 1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
	return (x);
}

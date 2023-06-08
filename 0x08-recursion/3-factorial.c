#include "main.h"

/**
 * factorial - a function to return factorial
 * @n: number to be factored
 * Return: The factorial of the number. If 'n' is less than 0,
 *       the function returns -1 to indicate an error.
 */
int  factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

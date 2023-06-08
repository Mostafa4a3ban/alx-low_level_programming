#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number need to be sqrt
 * Return: If n does not have a natural square root, the function return -1.
 *                       On error, -1 is returned
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	if (n < 0)
		return (-1);

	return (_factor(n, 1));
}
/**
 * _factor - it gets the factor by which result equals the factor
 * @x: number to be sequentialy divided by
 * @y: factor to be evaluated and increased if needed to
 *
 * Return: square root of num, or -1 if not found
 */
int _factor(int x, int y)
{
	int r = 0;

	if (x / y == y && x % y == 0)
		return (y);
	if (x / y == 0)
		return (-1);

	r = _factor(x, y + 1);
	return (r);
}

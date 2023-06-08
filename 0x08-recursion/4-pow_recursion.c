#include "main.h"
/**
 * _pow_recursion- function recursion that taake two arguments x, y and return
 *@x: the main
 *@y: the power
 *
 * Return: on success return -1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

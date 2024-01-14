#include "main.h"
/**
 * _pow_recursion - therecursion for calc the power
 *
 *@y: first argueement
 *@x: secon arguement
 *Return: -1 if y lower than 0
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y > 0)
	{
		result = result * x * _pow_recursion(x, y - 1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}

	return (result);
}

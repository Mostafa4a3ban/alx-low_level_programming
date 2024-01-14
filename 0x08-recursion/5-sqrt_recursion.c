#include "main.h"

/**
 * _sqrt_recursion - squre tarbeea
 *
 *@n: the arguement
 *Return: -1 if no natural root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_real(n, 0, n));
}
/**
 *_sqrt_real - squre root
 *
 *@num: your square root
 *@low: minimum num
 *@high: max num
 *Return: Root or -1
 */
int _sqrt_real(int num, int low, int high)
{
	int result = -1;

	if (low * low == num)
	{
		result = low;
	}
	else if (low * low < num && low <= high)
	{
		result = _sqrt_real(num, low + 1, high);
	}
	return (result);
}

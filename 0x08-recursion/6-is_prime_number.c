#include "main.h"

/**
 *is_prime_number - primeness
 *
 *@n: the argument of prime checking
 *Return: 0 or 1
 *
 */
int is_prime_number(int n)
{
	int result = 0;

	if (n <= 0)
	{
		return (result);
	}
	return (Check_Primeness(n, 2));
}
/**
 *Check_Primeness - check the primeness of a number
 *
 *@num: the element
 *@divisor: the maximum number
 */
int Check_Primeness(int num, int divisor)
{
	if (divisor < num)
	{
		if (num % divisor == 0)
		{
			return (0);
		}
		else
		{
			return Check_Primeness(num, divisor + 1);
		}
	}
	else
	{
		return (1);
	}
}

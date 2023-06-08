#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n:send
 * Return: 0 if no prime and 1 if prime
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check(n, 2));
}
/**
 * check - increasingly checks if there are divisors under num/2
 * @num: input num
 * @f: increasing factor
 * Return: 1 if num is prime, 0 otherwise
 */
int check(int num, int f)
{
	if (num % f == 0)
	{
		if (f == num)
			return (1);
		else
			return (0);
	}
	return (check(num, f + 1));
}

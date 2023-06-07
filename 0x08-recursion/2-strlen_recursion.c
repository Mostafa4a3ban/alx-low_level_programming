#include "main.h"
/**
 * _strlen_recursion - a function to count num of characters in a sting
 * @s: pointer to an array
 * Return: - return i
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

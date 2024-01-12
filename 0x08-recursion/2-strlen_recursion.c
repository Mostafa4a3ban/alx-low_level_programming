#include "main.h"

/**
 *_strlen_recursion - length of string is ok
 *
 *@s: for address of first string
 *Return: variable i
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

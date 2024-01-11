#include <stdio.h>
#include "main.h"
/**
 *_puts_recursion - print a string recursion way
 *@s: pointer to character.
 *Return: No return
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	if(*s == '\0')
	{
		_putchar('\n');
	}
}

#include "main.h"
/**
 * _puts_recursion - function iteration itself
 * @p:string
 * _putchar- used to print a character
 */
void _puts_recursion(char *p)
{
	if (*p == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*p);
		_puts_recursion(p + 1);
	}
}

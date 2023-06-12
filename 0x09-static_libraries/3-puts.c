#include "main.h"

/**
 * _puts - prints strings
 * @str: the string
 *_putchar prints a new line
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

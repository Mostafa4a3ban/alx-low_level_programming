#include <stdio.h>
#include "main.h"
/**
 *_print_rev_recursion - printing reverse array
 *
 *@s: pointer to a string
 * Return: No return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

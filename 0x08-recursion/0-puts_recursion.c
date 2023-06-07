#include "main.h"
/**
 * *_putchar - print
 **_puts_recursion - print char
 **arr[]@array takes characters
 **@s: string
 */
void _puts_recursion(char * p)
{
	if(*p == 0 )
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*p);
		_puts_recursion(p + 1);
	}
	
}

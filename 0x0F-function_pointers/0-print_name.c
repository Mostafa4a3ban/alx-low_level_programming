#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - to prrint th ename
 *
 * @name: to char of name
 * @f: function pointer
 *
 * Return: No return void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

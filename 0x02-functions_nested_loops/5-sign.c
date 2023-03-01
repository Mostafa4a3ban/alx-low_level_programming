#include "main.h"
/**
  *print_sign- print the sign
  *@n: the variable check the sign
  *Return: returns all signs
  **/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (0);
}
else if (n < 0)
{
	_putchar('-');
}
return (-1);
}

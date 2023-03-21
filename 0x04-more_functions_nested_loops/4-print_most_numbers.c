#include "main.h"

/**
  * print_most_numbers - prints number 0 to 9 without 2 and 4
  **/
void print_most_numbers(void)
{
	char i = '0';

	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar('\n');
}

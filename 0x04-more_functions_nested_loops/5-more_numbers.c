#include "main.h"

/**
  *more_numbers - function for printing many numbers
  *
  **/
void more_numbers(void)
{
	int i = 0, count =0;
	char c = 48, d = 49;

	for (i = 0;  i < 10; i++)
	{
		while (count < 15)
		{
			if (count == 10)
			{
				c = 48;
			}
			_putchar(c);
			c++;
			count++;
			if (count > 9 && count < 15)
			_putchar(d);
		}
		_putchar('\n');
		count = 0;
		c =48;
	}
}

#include "main.h"
/**
 * print_alphabet - print the alphabet from a to z in lowecase
 *
 *
**/
void print_alphabet(void)
{
int i, count = 0;
for (i = 97; i <= 122; i++)
{
	_putchar(i);
	if (i == 122 && count < 10)
	{
	i = 97;
	count++;
	_putchar('\n');
	}
}
	_putchar('\n');

}

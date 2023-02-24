#include <stdio.h>
/**
 * main- print all possible numbers
 * Return: return 0
 **/
int main(void)
{
int i, j;
char x = '0', y = '1', z = '2';
for (i = 0; i < 3; i++)
{
	for (j = 0; j < 1; j++)
	{
	putchar(x);
	putchar(y);
	putchar(z);
	}
	putchar(',');
	putchar(' ');
}
return (0);
}

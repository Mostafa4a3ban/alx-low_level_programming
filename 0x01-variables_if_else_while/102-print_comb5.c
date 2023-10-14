#include <stdio.h>
/**
* main - prints numbers from 0 to 99
* Return: always return 0
*
**/

int main(void)
{
int i, j, k, l;
for (i = '0'; i <= '9'; i++)
{
	for (j = '0'; j < '9'; j++)
	{
	for (k = '0'; k <= '9'; k++)
	{
	for (l = '0'; l <= '9'; l++)
	{
	putchar(i);
	putchar(j);
	putchar(' ');
	putchar(k);
	putchar(l);
	putchar(',');
	}
	}
	}
}
putchar('\n');
return (0);
}

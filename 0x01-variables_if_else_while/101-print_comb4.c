#include <stdio.h>
/**
 * main- print all possible numbers
 * Return: return 0
 **/
int main(void)
{
int c, i, j;
for (c = '0'; c <= '9'; c++)
{
	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < j && j < i)
			{
				putchar(c);
				putchar(j);
				putchar(i);
			if (c != '7')
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
}
putchar('\n');
return (0);
}

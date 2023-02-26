#include <stdio.h>
/**
* main - prints numbers from 0 to 99
* Return: always return 0
*
**/

int main(void)
{
int i, j;
for (i = '0'; i <= '9' ; i++)
{
	for (j = '0'; j <= '9'; j++)
	{
		if (i <= j)
		{
			putchar(i);
			putchar(j);
			if (i != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}

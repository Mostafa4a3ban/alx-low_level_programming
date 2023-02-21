#include <stdio.h>
/**
 ** main - Prints all the numbers of base 16 in lowercase.
 **
 ** Return: Always 0.
 **/
int main(void)
{
int number;
char l;
for (number = 0; number < 10; number++)
putchar((number % 10) + '0');
for (l = 'a'; l <= 'f'; l++)
putchar(l);
putchar('\n');
return (0);
}

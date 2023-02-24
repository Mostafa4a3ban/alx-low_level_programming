#include <stdio.h>
/**
 * main - the main function to print a phrase
 * Return: to return 0
 **/
int main(void)
{
int i = 0;
char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (x[i] != '\n')
{
putchar(x[i]);
i++;
}
putchar('\n');
return (1);
}

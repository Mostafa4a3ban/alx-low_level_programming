#include <stdio.h>
/**
 *main-entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;
char b;
unsigned int u;
float f;
printf("%d\n", (int)sizeof(a));
printf("%c\n", (char)sizeof(b));
printf("%u\n", (unsigned int)sizeof(u));
printf("%f\n", (float)sizeof(f));
return (0);
}

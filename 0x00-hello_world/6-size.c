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
printf("%d", (int)sizeof(a));
printf("%c", (char)sizeof(b));
printf("%u", (unsigned int)sizeof(u));
printf("%f", (float)sizeof(f));
return (0);
}

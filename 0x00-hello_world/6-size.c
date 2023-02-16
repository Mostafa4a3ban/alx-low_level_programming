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
long long r;
float f;
printf("%d", sizeof(a));
printf("%c", sizeof(b));
printf("%u", sizeof(u));
printf("%ll", sizeof(r));
printf("%f", sizeof(f));
return (0);
}

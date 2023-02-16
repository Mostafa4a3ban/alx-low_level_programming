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
printf("Size of a long long int: %d byte(s)\n", (int)sizeof(a));
printf("Size of a long long int: %c byte(s)\n", (char)sizeof(b));
printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(u));
printf("Size of a long long int: %f byte(s)\n", (float)sizeof(f));
return (0);
}

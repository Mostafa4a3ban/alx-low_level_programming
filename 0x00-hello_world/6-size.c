#include <stdio.h>
/**
 *main-entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int a;
unsigned int u;
float f;
printf("Size of a  int: %d byte(s)\n", (int)sizeof(a));
printf("Size of a unsigned int: %u byte(s)\n", (unsigned int)sizeof(u));
printf("Size of a float int: %f byte(s)\n", (float)sizeof(f));
return (0);
}

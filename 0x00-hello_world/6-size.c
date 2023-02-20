#include <stdio.h>
/**
 *main-entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int l;
long long ll;
float f;
printf("Size of a char: %d byte(s)\n", sizeof(a));
printf("Size of a int: %d byte(s)\n", sizeof(b));
printf("Size of a  long int: %d byte(s)\n", sizeof(l));
printf("Size of a  long long int: %d byte(s)\n", sizeof(ll));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}

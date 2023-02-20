#include <stdio.h>
/**
 *main - the main function
 *Return: return 0
 *
 **/
int main(void)
{
int n;
scanf("%i", &n);
if (n > 0)
	printf("%i is positive", n);
else if (n == 0)
	printf("%i is zero", n);
else
	printf("%i is negative", n);
return (0);
}

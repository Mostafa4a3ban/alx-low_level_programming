#include <stdio.h>
/**
 *main - the main function
 *Return: return 0
 *
 **/
int main(void)
{
int n;
scanf("%d", &n);
if (n > 0)
	printf("%d is positive", n);
else if (n == 0)
	printf("%d is zero", n);
else
	printf("%d is negative", n);
return (0);
}

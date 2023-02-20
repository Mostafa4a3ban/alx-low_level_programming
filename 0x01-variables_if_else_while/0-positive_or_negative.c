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
	printf("is positive");
else if (n == 0)
	printf("is zero");
else
	printf("is negative");
return (0);
}

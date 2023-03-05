#include "main.h"
#include <stdio.h>
/**
  *print_to_98- functon to print to 98
  *@n: the starting point
  **/
void print_to_98(int n)
{
if (n < 98)
{
	for (; n < 98; n++)
	{
		printf("%d, ", n);
	}
printf("%d", n);
printf("\n");
}
else if (n > 98)
{
	for (; n > 98; n--)
	{
	printf("%d, ", n);
	}
printf("%d", n);
printf("\n");
}
else
{
	printf("%d", n);
	printf("\n");
}
}

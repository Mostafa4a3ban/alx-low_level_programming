#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 ** main - Entry point of the program.
 ** Return: 0 on successful execution.
 **/
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
return (0);
}

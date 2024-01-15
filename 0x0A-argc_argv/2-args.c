#include <stdio.h>

/**
 *main - the main function.
 *@argc: the no. of arguments.
 *@argv: the array of strings.
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 *main - the main function
 *@argc: the first integer
 *@argv: the array of strings
 *Return: Error or 0.
 */
int main(int argc, char *argv[])
{
	int result = 0, i;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}

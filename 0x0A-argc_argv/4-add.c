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

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}

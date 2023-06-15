#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main func
 * @argc: counting
 * @argv: for vector
 *Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc < 3 || argc > 3)
		printf("Error\n");
	else
	{
		i = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
		printf("%d\n", i);
	}

return (0);
}

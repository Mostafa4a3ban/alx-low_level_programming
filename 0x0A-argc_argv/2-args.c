#include <stdio.h>

/**
 * main - the main function for arguments
 * @argc: integer variable that count arguments
 * @argv:pointer to character to prit the argument itself
 * Return: Always return 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

#include "main.h"
#include <stdlib.h>

/**
 ** _strlen - returns the length of a string
 ** @s: string to evaluate
 **
 ** Return: the length of the string
 **/
int _strlen(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 ** string_nconcat - concatinate the first n chars from a string with another
 ** @s1: s1
 ** @s2: s2
 ** @n: number of chars
 **
 ** Return: NULL in fails, pointer to the new string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, size, i;
	char *buffer;
	
	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	
	size = len1 + n + 1;
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		buffer[i] = s1[i];
	for (i = 0; i < n; i++)
		buffer[len1 + i] = s2[i];
	buffer[len1 + i] = '\0';
	
	return (buffer);
}

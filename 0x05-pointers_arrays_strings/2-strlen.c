#include "main.h"
#include <stdio.h>

/**
  *_strlen - the length of strength
  *@s: the string which to be calculated
  *Return: return value
  **/
int _strlen(char *s)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	return (j);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *str_concat - concatinate.
 * @s1: pointer to strring
 * @s2: pointer to string 2.
 *
 * Return: Returns NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned long int i;

	if (*s1 == '\0')
		*s1 = '\0';
	if (*s2 == '\0')
		*s2 = '\0';
	if (*s1 == '\0' && *s2 == '\0')
		return (NULL);
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	for (i = 0 ; i < (strlen(s1) + strlen(s2) + 1); i++)
	{
		if (i < strlen(s1) && *s1 != '\0')
			ptr[i] = s1[i];
		if (i == strlen(s1) && *s1 != '\0')
			ptr[i] = s2[i];
		if (i > strlen(s1) && i < (strlen(s1) + strlen(s2)) && *s2 != '\0')
			ptr[i] = s2[i];
		if (i == strlen(s2) + strlen(s1))
			ptr[i] = '\0';
	}
return (ptr);
}

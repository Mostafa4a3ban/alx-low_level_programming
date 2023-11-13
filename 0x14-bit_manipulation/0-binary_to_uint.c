#include <stdio.h>
#include <math.h>
/**
 ** mbinary_to_uint - check the code
 ***
 *** Return: Always 0, or conversion.
 **
 **/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int conversion = 0;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			conversion = conversion * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
}
	return (conversion);
}

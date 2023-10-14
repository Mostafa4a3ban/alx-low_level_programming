#include "main.h"
#include <stdio.h>

/**
 **_mwmset a function to take 3 arg
 **s@pointer
 **b@buffer
 **n@number of bytes
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned i = n;
	for(n; n < i; n--)
	* s = b;
	return s;
}

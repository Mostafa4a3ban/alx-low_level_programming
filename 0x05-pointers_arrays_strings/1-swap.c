#include "main.h"
#include <stdio.h>

/**
  *swap_int - to exchange two values
  *@a: the adress of a
  *@b: the adress of b
  **/
void swap_int(int *a, int *b)
{
	int swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}

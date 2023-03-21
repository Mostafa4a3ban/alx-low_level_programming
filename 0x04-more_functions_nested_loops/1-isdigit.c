#include "main.h"

/**
  *_isdigit - function to check digit or not
  *@c: the integer will be checked
  *Return: 0 or 1 if digit
  **/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);


}

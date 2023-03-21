#include "main.h"
/**
  *_isupper - check the uppercasity
  *@c: the checked variable
  *Return: 0 or  1
  **/
int _isupper(char c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}

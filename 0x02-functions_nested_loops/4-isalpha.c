#include "main.h"
/**
  *_isalpha- check if the symbol letter or not
  *@c: a variable carry a value to check it
  *Return: return 0 or return 1
  **/
int _isalpha(int c)
{
int letter = c;
if ((letter >= 97 && letter <= 122) || (letter >= 65 && letter <= 90))
	return (1);
else
	return (0);
}

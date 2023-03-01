#include "main.h"
/**
  *_islower - function is between lowercase or not
  *@c: to include it
  *Return: return 1 in lowercase, 0 in not lowercase
  **/
int _islower(int c)
{
int letter;
letter = c;
if (letter >= 97 && letter <= 122)
	return (1);
else
	return (0);
}

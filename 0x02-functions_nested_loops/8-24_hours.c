#include "main.h"
/**
  *jack_bauer: the function that prints the day light
  *void- no return
  *
  **/
void jack_bauer(void)
{
int i = 0, j;
while (i < 24)
{
j = 0;
while (j < 60)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
_putchar(':');
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
_putchar('\n');
j++;
}
i++;
}
}

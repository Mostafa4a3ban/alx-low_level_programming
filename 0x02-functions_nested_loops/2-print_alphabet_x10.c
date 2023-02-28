#include "main.h"
/**
* print_alphabet_x10 - print the alphabet from a to z in lowecase 10 times
*
*
**/
void print_alphabet_x10(void)
{
int i, count = 0;
for (i = 97; i <= 122; )
{
_putchar(i);
if (i == 122 && count < 9)
{
i = 96;
count++;
_putchar('\n');
}
i++;
}
_putchar('\n');
}

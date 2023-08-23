#include "main.h"
/**
*puts_half - prints the first half of a string
*
*@str: string to be printed
*/

void puts_half(char *str)
{
int length = 0, x = 0, n;
while (str[x++])
length++;

if ((length % 2) == 0)
n = length / 2;

else
n = (length + 1) / 2;

for (x = n ; x <= length - 1; x++)
_putchar(str[x]);

_putchar('\n');
}


#include "main.h"
/**
 *puts2 - a function that prints a string starting from the first
 *
 *@str: string to be printed
 */

void puts2(char *str)
{
int x = 0, len = 0;

while (str[x++])
len++;
for (x = 0; x < len; x = x + 2)
_putchar(str[x]);


_putchar('\n');

}


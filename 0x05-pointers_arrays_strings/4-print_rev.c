#include "main.h"

/**
*print_rev - prints a string in reverse. followed by a new line.
*
*@s: string to be printed.
*
*return: 0
*/

void print_rev(char *s)
{
int len = 0, index;
char *m;

while (*s++)
len++;

for (int i = len - 1; i >= 0; i--)
{
m = (s + index);
_putchar(*m);
}

_putchar('\n');
}

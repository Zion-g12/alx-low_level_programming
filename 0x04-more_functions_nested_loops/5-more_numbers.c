#include "main.h"
/**
 * more_numbers - function that prints numbers 14 times
 * Return: always returns 0
 */
void more_numbers(void)
{
int i;
int j;
i = 0;
while (i <= 9)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
_putchar((j / 10) + '0');
_putchar((j % 10) + '0');
}
_putchar('\n');
i++;
}
}

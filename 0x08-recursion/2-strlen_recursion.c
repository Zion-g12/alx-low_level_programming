#include "main.h"
/**
 *_strlen_recursion - a functio that counts the length of a stirng in recursion
 *@s: a string parameter to be counted
 *Return: returns the counted value of the recusrsive string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
s++;
return (1 + _strlen_recursion(s));
}
}

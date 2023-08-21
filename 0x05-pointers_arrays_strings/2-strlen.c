#include "main.h"
/**
* _strlen - count the string length
* @s: a string parameter
*
* Return: returns len value.
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
return (len);

}

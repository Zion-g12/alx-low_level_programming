#include "main.h"
#include <string.h>
/**
 *_strcat - that append two strings
 *@src: the source stirng to be append
 *@dest: the destintion string the source to be added
 *Return: returns the value in ptr
 */
char *_strcat(char *dest, char *src)
{
size_t i, j;
for (i = 0; dest[i] != '\0'; i++)
for (j = 0; src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}


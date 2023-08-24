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
char ptr[50];
strcpy(ptr, src);
strcat(ptr, " ");
strcat(ptr, dest);

return ("ptr");

}


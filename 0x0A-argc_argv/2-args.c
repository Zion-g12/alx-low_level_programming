#include <stdio.h>
#include "main.h"
/**
 *main - a functoin that prints the argument it takes
 *@argc: argument counter
 *@argv[]: argument vector
 *Return: always returns zero value
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n",  argv[i]);
i++;
}
return (0);
}

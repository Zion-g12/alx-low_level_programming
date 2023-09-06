#include <stdio.h>
/**
 *main - a function that prints the excuted file name
 *@argc: an argument counter
 *@argv[]: argument vector
 *Return: it always returns 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}

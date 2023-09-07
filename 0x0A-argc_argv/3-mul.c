#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - argc argv mul
 * @argc: arg cou
 * @argv: vector
 * Return: mul
 */
int main(int argc, char *argv[])
{
int num;
int i;
int num1;
num1 = 1;
if (argc == 3)
{
for (i = 1; i < 3; i++)
{
num1 = strtol(argv[i], NULL, 10);
num *= num1;
}
printf("%d\n", num);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

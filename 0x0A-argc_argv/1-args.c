#include <stdio.h>
/**
 *main - a function that count arguments
 *@argc: an argument counter
 *@argv[]: an argument vector
 *Return: always returns zero value
 */
int main(int argc ,__attribute__((unused))char *argv[])
{ 
int c = argc - 1;
printf("%d\n" , c);

return 0;
}

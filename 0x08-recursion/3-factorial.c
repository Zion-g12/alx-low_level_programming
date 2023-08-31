#include "main.h"
/**
 *factorial - a function returns the factorial of that number
 *@n: the integer the factorial to be calculated
 *Return: returns -1 , 1 the calculated factorial value
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (-1);
}
}

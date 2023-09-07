#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int num = 1 , i;
if (argc == 3)
{
for(i = 1; i < 3 ; i++)
{
int num1 = strtol(argv[i], NULL , 10);
num = num * num1;
}
printf("%d\n", num);
}
else
{ 
printf("Error\n");
return(1);
}
return(0);
}

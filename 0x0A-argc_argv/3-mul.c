#include <stdio.h>

/**
* main - Will multiply the args numbers
* atoi - Converts a string to an int
* @argc: Argument Count
* @argv: Argument Vector
* Return: 0
**/

int main(int argc, char *argv[])
{
int n1, n2, result;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
result = n1 *n2;
printf("%d\n", result);
return (0);
}

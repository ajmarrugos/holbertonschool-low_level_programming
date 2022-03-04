#include "main.h"

/**
* main - Will sum args as positive numbers
* atoi - Converts a string to an int
* @argc: Argument Count
* @argv: Argument Vector
* Return: Result
**/

int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc < 1)
return (0);
for (i = 1; i < argc; i++)
{
if (!atoi(argv[i]))
{
printf("%s\n", "Error");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}

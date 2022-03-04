#include "main.h"

/**
* main - Will print the 'args' content
* @argc: Argument Count
* @argv: Argument Vector
* Return: 0
**/

int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}

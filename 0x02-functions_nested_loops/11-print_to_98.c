#include "main.h"
/**
* print_to_98 - Prints all natural numbers fron 'n' to '98' & a new line
* @n: Input number
* Return: Output values
**/
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
printf("%d, ", n);
}
}
else if (n < 98)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
}
printf("%d\n", n);
}

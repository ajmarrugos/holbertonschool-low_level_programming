#include "main.h"
/**
* print_sign - Checks if the input is positive, negative or 0
* @n: Input number is integer
* _putchar - Algorithm values are given in ASCII format
* Return: 0 if 0, 1 if greater than 0 and -1 if less than 0
**/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (8);
}
_putchar('\n');
}

#include "main.h"

/**
* print_line - Draws a straight line according to parameter
* @n: Input numer of time that prints '_'
* Return: A straight line
**/

void print_line(int n)
{
char c;
for (c = 0; c < n; c++)
_putchar('_');
_putchar('\n');
}

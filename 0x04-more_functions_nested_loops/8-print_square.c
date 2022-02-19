#include "main.h"

/**
* print_square - Prints n squares according n number of times
* @size: size of both width and length
* Return: A square made of '#'
**/

void print_square(int size)
{
int x, y;
if (size <= 0)
_putchar('\n');
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
_putchar('#');
_putchar('\n');
}
}

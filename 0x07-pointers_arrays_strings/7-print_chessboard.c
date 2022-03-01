#include "main.h"

/**
* print_chessboard - Will print a chessboard with values
* @a: Given chars
* Return: Arrays of characters ordered
**/

void print_chessboard(char (*a)[8])
{
int p1, p2;
for (p1 = 0; p1 < 8; p1++)
{
for (p2 = 0; p2 < 8; p2++)
{
_putchar(a[p1][p2]);
}
_putchar('\n');
}
}
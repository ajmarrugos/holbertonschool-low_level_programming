#include "main.h"
/**
* times_table - Prints array of multiplication tables starting from 0
* Values in 'putchar' are given in ASCII format codes
* Return: 9 times tables
**/
void times_table(void)
{
int x, y, z;
for (x = 0; x <= 9; x++)
{
_putchar(48);
for (y = 1; y <= 9; y++)
{
z = x * y;
_putchar(44);
_putchar(32);
if (z <= 9)
{
_putchar(32);
_putchar(z + 48);
}
else
{
_putchar((z / 10) + 48);
_putchar((z % 10) + 48);
}
}
_putchar('\n');
}
}

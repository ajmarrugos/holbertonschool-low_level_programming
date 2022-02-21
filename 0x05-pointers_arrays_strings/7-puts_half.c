#include "main.h"

/**
* puts_half - Print half of a string
* @str: Input string
* Return: Half of input
**/

void puts_half(char *str)
{
int i = 0;
int o;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 1)
{
o = (i - 1) / 2;
o += 1;
}
else
{
o = i / 2;
}
for (; o < i; o++)
{
_putchar(str[o]);
}
_putchar('\n');
}

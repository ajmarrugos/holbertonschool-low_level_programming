#include "main.h"
/**
* print_most_numbers - Print the numbers since 0 up to 9
* This function excludes '2' and '4' numbers
* Return: The numbers since 0 up to 9 without '2' or '4'
**/
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
if (c != '2' && c != '4')
_putchar(c);
_putchar('\n');
}

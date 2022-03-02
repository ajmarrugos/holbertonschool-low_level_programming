#include "main.h"

/**
* _print_rev_recursion - Will print a string in reverse
* (Recursion Mode)
* @s: String to print
* Return: Nothing
**/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

#include "main.h"
/**
* _islower - Checks if input is lowercase
* @c: value is given in ASCII code format
* Return: 1 if lowercase or 0 if not
**/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
_putchar('\n');
}

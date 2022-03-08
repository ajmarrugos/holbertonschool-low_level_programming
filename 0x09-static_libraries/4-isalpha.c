#include "main.h"
/**
* _isalpha - Checks if the input is alphabetic character
* @c: value is given in ASCII code format
* Return: 1 if alphabet character or 0 if not or else
**/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
_putchar('\n');
}

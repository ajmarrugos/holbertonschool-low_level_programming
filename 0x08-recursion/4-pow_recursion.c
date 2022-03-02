#include "main.h"

/**
* _pow_recursion - Will return the value of 'x' raised to the power of 'y'
* (Recursion Mode)
* @x: The value to multiply
* @y: The times to multiply the value
* Return: The value multiplied y times
**/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

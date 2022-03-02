#include "main.h"

/**
* _sqrt_recursion - Will return the natural square root of a number
* (Recursion Mode)
* @n: input
* Return: Always 0 (Success)
**/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (squareroot(n, (n + 1) / 2));
}

/**
* squareroot - Checks if perfect square
* @n: input
* @i: counter
* Return: if square root
**/

int squareroot(int n, int i)
{
if (i < 1)
return (-1);
else if (i * i == n)
return (i);
else
return (squareroot(n, i - 1));
}

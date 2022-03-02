#include "main.h"

/**
* factorial - Will calculate the factorial of a given number
* (Recursion Mode)
* @n: Input number
* Return: An integer value
**/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}

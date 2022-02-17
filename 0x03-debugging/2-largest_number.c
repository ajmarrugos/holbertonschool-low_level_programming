#include <stdio.h>

/**
* largest_number - Return the largest number
* @a: 1st integer
* @b: 2nd integer
* @c: 3rd integer
* Return: largest number
**/

int largest_number(int a, int b, int c)
{
int l;
if (a >= b && a >= c)
{
l = a;
}
else if (b >= a && b >= c)
{
l = b;
}
else
{
l = c;
}
return (l);
}

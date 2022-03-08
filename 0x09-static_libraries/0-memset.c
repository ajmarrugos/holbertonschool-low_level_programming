#include "main.h"
/**
* _memset - Will fill a block of memory with a specific value
* @n: Number of bytes to be changed
* @s: Starting address of memory to be filled
* @b: Desired value
* Return: Changes the array with a new 'n' value in Bytes
**/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

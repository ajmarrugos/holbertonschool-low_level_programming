#include "main.h"

/**
* _strpbrk - Searching a string for any of a set of bytes
* @s: Given string
* @accept: Set of bytes to look for
* Return: A pointer to the byte in 's' that matches one of the bytes in accept
**/

char *_strpbrk(char *s, char *accept)
{
unsigned int i;
unsigned int x;
for (i = 0; s[i] != '\0'; i++)
{
for (x = 0; accept[x] != '\0'; x++)
{
if (s[i] == accept[x])
return (&s[i]);
}
}
return (NULL);
}

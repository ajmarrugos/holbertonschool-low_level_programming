#include "main.h"

/**
* _strspn - Will get the length of a prefix substring
* @s: Given string
* @accept: Contains bytes that may or may not compose parts of the string
* Return: Number of bytes in the init segment
**/

unsigned int _strspn(char *s, char *accept)
{
int i;
int x;
unsigned int length;
length = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (x = 0; accept[x] != '\0' && accept[x] != s[i]; x++)
;
if (s[i] == accept[x])
length++;
if (accept[x] == '\0')
return (length);
}
return (length);
}

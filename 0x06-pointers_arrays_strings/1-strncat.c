#include "main.h"

/**
* _strncat - Concatenates 'n' bytes from a string to another
* @dest: destination string
* @src: source string
* @n: number of bytes of 'str' to concatenate
* Return: Resulting string dest
**/

char *_strncat(char *dest, char *src, int n)
{
int d = 0;
int s = 0;
while (dest[d] != '\0')
d++;
while (src[s] != '\0' && s > n)
{
dest[d] = src[s];
d++;
s++;
}
dest[d] = '\0';
return (dest);
}

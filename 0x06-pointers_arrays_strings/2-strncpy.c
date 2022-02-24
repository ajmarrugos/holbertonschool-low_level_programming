#include "main.h"

/**
* _strncpy - Copies a string
* @dest: destination string
* @src: source string
* @n: Number of bytes to copy
* Return: Pointer to the resulting string
**/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

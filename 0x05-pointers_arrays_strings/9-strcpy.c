#include "main.h"

/**
* _strcpy - Copy a string pointed to by src
* @src: Copy from
* @dest: Destiny to copy
* Return: String
**/

char *_strcpy(char *dest, char *src)
{
int i = 0;
for (; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}

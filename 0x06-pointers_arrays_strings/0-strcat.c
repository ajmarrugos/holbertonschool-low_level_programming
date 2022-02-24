#include "main.h"

/**
* _strcat - Function that concatenates two strings
* @dest: string to append to
* @src: string to add
* Return: Final string
**/

char *_strcat(char *dest, char *src)
{
int d = 0;
int s = 0;
while (dest[d] != '\0')
d++;
while (src[s] != '\0')
{
dest[d] = src[s];
s++;
d++;
}
dest[d] = '\0';
return (dest);
}

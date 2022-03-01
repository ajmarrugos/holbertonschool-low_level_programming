#include "main.h"

/**
* *_strchr - Locates a character in a string
* @s: Input string
* @c: Char to find
* Return: A pointer to the character found
* Or NULL if the character is not found
**/

char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}

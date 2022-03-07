#include "main.h"

/**
* *str_concat - Concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* Return: Pointer to the resulting string
**/

char *str_concat(char *s1, char *s2)
{
int i = 0, x = 0, y = 0, z = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[x])
x++;
z = i + x;
s = malloc((sizeof(char) * z) +1);
if (s == NULL)
return (NULL);
x = 0;
while (y < z)
{
if (y <= i)
s[y] = s1[y];
if (y >= i)
{
s[y] = s2[x];
x++;
}
y++;
}
s[y] = '\0';
return (s);
}

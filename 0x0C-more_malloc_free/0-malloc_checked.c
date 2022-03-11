#include "main.h"

/**
* *string_nconcat - Will concatenate two strings
* @s1: First string
* @s2: Second string
* @n: Limit of s2
* Return: Pointer to new space in memory or null
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strDup;
int i;
unsigned int x;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
strDup = malloc(sizeof(char) * (i + n + 1));
if (strDup == NULL)
return (NULL);
i = x = 0;
while (s1[i] != '\0')
{
strDup[i] = s1[i];
i++;
}
while (x < n && s2[x] != '\0')
{
strDup[i] = s2[x];
i++, x++;
}
strDup[i] = '\0';
return (strDup);
}

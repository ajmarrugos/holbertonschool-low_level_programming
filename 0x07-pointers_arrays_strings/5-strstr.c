#include "main.h"

/**
* *_strstr - Will locate a substring inside a string
* @haystack: String to search in
* @needle: Substring to look for
* Return: Pointer to the beginning of the located substring
* or NULL if the substring is not found
**/

char *_strstr(char *haystack, char *needle)
{
int i, x;
for (i = 0; haystack[i] != '\0'; i++)
{
for (x = 0; needle[x] != '\0'; x++)
{
if (haystack[i + x] != needle[x])
break;
}
if (!needle[x])
return (&haystack[i]);
}
return (NULL);
}

#include "main.h"

/**
* string_toupper - Changes all lowercase to uppercase
* @s: String to modify
* Return: Resulting string
**/
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}

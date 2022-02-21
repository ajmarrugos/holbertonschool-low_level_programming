#include "main.h"

/**
* _strlen - Returns the lenght of a string
* @s: String to count
* Return: String lenght
**/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}

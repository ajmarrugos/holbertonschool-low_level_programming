#include "main.h"

/**
* *malloc_checked - Will allocate memory using malloc
* @b: Number of bytes to allocate
* Return: A pointer to the allocated memory
**/

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

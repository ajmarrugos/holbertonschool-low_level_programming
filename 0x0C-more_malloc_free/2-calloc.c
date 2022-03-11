#include "main.h"

/**
* _calloc - Will allocate memory for an array, using malloc.
* @nmemb: number of elements of array.
* @size: size in bytes of each element.
* Return: Adress of memory
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *mem;
if (nmemb == 0 || size == 0)
return (NULL);
mem = malloc(size * nmemb);
if (mem == NULL)
{
free(mem);
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
mem[i] = 0;
return (mem);
}

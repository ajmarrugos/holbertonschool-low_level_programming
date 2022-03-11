#include "main.h"

/**
* array_range - Creates an array of integers from min to max.
* @min: Minimum int in array
* @max: Maximum int in array
* Return: Pointer to array or null
**/

int *array_range(int min, int max)
{
int *p;
int i, size;
if (min > max)
return (NULL);
size = (max - min) + 1;
p = malloc(size * sizeof(*p));
if (p == NULL)
free(p);
return (NULL);
for (i = 0; i < size && min <= max; i++, min++)
*(p + i) = min;
return (p);
}

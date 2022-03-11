#include "main.h"

/**
* array_range - Creates an array of integers from min to max.
* @min: Minimum int in array
* @max: Maximum int in array
* Return: Pointer to array or null
**/

int *array_range(int min, int max)
{
int *arr;
int i, len;
if (min > max)
return (NULL);
len = max - min + 1;
arr = malloc(sizeof(int) * len);
if (arr == NULL)
return (NULL);
for (i = 0; i < len; i++)
arr[i] = min++;
return (arr);
}

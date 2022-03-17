#include "function_pointers.h"

/**
* array_iterator - Executes a function for each element
* @array: Array of parameters
* @size: how many elem to printSize of the array
* @action: Function to execute
* Return: void
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

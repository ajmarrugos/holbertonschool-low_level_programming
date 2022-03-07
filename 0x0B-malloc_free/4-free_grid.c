#include "main.h"

/**
* free_grid - Free a 2D integer grid previously created
* @grid: Pointer to 2D array to free
* @height: Input height (size)
* Return: 0 Success
**/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}

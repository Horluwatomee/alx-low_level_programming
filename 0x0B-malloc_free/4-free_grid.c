#include <stdlib.h>
#include "main.h"

/**
* free_grid - Free a 2 dimensional grid previously created by
* alloc_grid function
* @grid: The grid to be freed
* @height: The height of the grid
*
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

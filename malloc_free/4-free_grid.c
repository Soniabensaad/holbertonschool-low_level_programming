#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free up the memory of a 2d array
 * @grid: target memory to free
 * @height: size of array.
 *
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
			free(grid[height--]);
		free(grid);
	}
}
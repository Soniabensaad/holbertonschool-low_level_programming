#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - nested loop to make grid
 *
 *@width: width input
 * @height: height input
 *
 * Description: nested loop to make grid
 *
 * Return: pointer to 2
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL || height != 0)
	{
		while (height >= 0)
			free(grid[height--]);
		free(grid);
	}
}
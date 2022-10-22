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
	int i;
    if (grid != NULL || height <= 0)
    {
        
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
    }

}
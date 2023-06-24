#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - to free the grid after finishing it
 * @grid: pointer to pointer
 *@height: the height.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		free(grid);
		i++;
	}
}

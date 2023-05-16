#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function to free a 2 dimensional array
 * @grid: Pointer to the array in question
 * @height: Height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

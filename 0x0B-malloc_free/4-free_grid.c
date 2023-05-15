#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * * free_grid - frees a 2D grid previously created
 * @grid: input pointer to grid or 2D array
 * @height: height of 2D arrray
 * Return: void
 */
void free_grid(int **grid, int height)
{
	{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

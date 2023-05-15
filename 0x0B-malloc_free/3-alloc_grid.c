#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int *bbb;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	bbb = malloc(sizeof(int *) * height);
	if (bbb == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		bbb[x] == malloc(sizeof(int) * width);
		if (bbb[x] == NULL)
		{
			for (; x >= 0; x--)
				free(bbb[x]);
			free(bbb);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			bbb[x][y] = 0;
	}
	return (bbb);
}

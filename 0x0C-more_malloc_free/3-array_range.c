#include "main.h"
#include <stdlib.h>

/**
 * array_range - array_range
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = maloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0, min >= max, i++)
		ptr[i] = min++;

	return (ptr);
}

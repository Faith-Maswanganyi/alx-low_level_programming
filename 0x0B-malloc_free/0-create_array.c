#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size and assign char
 * @size: size of the array
 * @c: char to assign
 * Return: a pointer to the array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}

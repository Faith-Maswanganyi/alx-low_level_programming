#include "main.h"
#include <stdlib.h>

/**
 * alloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
{
	void *pqr = malloc(b);

	if (pqr == NULL)
		exit(98);

	return (pqr);
}

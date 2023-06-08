#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to clear
 *
 * Return: 1(on success)/ -1(on error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = 1 << index;
	*n = *n & (~b);
	return (1);
}

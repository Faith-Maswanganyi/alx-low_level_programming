#include "main.h"

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and update the value it point to 98
 * @n: input
 * Return: n
 */
void reset_to_98(int *n)
{
	n = 98;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	printf("n=%d\n", n);
}

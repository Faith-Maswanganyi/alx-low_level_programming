#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;

while (current != NULL)
{
	printf('%d ', current->data);
	count++;
	current = current->next;
}
printf('\n');
return (count);
}

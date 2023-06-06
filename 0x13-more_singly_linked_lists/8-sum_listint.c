#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	size_t sum = 0;

	while (current != NULL)
	{
		sum += current->n;

		current = current->next;
	}
	return (sum);
}

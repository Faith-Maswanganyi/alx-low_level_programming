#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the deleted node data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int count;

	if (*head == NULL)
		return (0);

	current = *head;
	count = current->n;
	free(current);

	*head = (*head)->next;

	return (count);
}

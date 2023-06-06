#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: pointer to the new node, or NULL if it fails
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next_node = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	else
		*head = new_node;

	return (new_node);
}

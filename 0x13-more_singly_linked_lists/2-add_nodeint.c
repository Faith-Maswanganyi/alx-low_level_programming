#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: A pointer to the address of the head of the listint_t list
 * n: data to insert in that new node
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

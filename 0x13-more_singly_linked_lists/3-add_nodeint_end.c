#include "lists.h"

/**
 * add_nodeint_end - function adds a node at the end of a linked list
 * @head: The pointer to first element in the list
 * @n: data to insert in the new element
 *
 * Return: The pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *temp = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}

	for (temp = *head; temp->next; temp = temp->next)
		continue;

	temp->next = new;

	return (new);
}

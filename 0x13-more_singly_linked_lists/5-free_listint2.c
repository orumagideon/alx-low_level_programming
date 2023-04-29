#include "lists.h"

/**
 * free_listint2 - function frees a linked list
 * @head: The pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}

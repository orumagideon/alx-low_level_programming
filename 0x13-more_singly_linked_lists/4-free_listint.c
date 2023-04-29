#include "lists.h"

/**
 * free_listint - function frees a linked list
 * @head: listint_t the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	if (!head)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

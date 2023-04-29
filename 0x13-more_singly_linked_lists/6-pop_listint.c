#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: The pointer to the first element
 *
 * Return: data inside the elements that was deleted,
 * or 0 when the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	temp = *head;
	num = temp->n;
	*head = temp->next;
	free(temp);

	return (num);
}

#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @x: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **x)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!x || !*x)
		return (0);

	current = *x;
	*x = NULL;

	while (current)
	{
		temp = current;
		current = current->next;
		len++;

		if (temp < current)
			free(temp);
		else
		{
			free(temp);
			break;
		}
	}

	return (len);
}

#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked lists
 * @x: The linked list listint_t to traverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *x)
{
	const listint_t *temp = x;
	size_t num = 0;

	for (temp = x; temp; temp = temp->next)
		num++;

	return (num);
}

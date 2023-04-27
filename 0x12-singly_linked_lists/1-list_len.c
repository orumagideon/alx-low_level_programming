#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function returns number of elements in linked list
 * @h: The pointer to the list_t list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

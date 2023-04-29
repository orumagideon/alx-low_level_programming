#include "lists.h"

/**
 * print_listint - funtion prints all the elements of a linked list
 * @x: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *x)
{
	const listint_t *temp = x;
	size_t num = 0;

	for (temp = x; temp; temp = temp->next)
	{
		printf("%d\n", temp->n);
		num++;
	}

	return (num);
}

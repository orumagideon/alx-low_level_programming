#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function creates an array of integers
 * @minm: is the minimum range of values stored
 * @maxm: is the maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int minm, int maxm)
{
	int *ptr;
	int i, size;

	if (minm > maxm)
		return (NULL);

	size = maxm - minm + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; minm <= maxm; i++)
		ptr[i] = minm++;

	return (ptr);
}

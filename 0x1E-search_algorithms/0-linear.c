#include "search_algos.h"

/**
 * linear_search - Finds  value in an array
 *                 of integers using linear search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: When value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Validate if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of array */
	for (i = 0; i < size; i++)
	{
		/* Value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* Value is found */
		if (array[i] == value)

			/* Index of the value */
			return (i);
	}

	/* return -1 */
	return (-1);
}

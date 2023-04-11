#include "main.h"
#include <stdlib.h>
/**
 * create_array - function creates array of size size and assign char x
 * @size: size of array
 * @x: char to assign
 * Description: create array of size size and assign char x
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char x)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = x;
	return (str);
}

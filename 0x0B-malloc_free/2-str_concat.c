#include "main.h"
#include <stdlib.h>
/**
 * str_concat - fuction gets ends of input and add together for size
 * @x1: input one to concat
 * @x2: input two to concat
 * Return: concat of x1 and x2
 */
char *str_concat(char *x1, char *x2)
{
	char *conct;
	int i, ci;

	if (x1 == NULL)
		x1 = "";
	if (x2 == NULL)
		x2 = "";

	i = ci = 0;
	while (x1[i] != '\0')
		i++;
	while (x2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (x1[i] != '\0')
	{
		conct[i] = x1[i];
		i++;
	}

	while (x2[ci] != '\0')
	{
		conct[i] = x2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}

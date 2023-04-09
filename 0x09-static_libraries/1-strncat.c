#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * using at most x bytes from src
 * @dest: input value
 * @src: input value
 * @x: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int x)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < x && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

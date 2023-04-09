#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @x: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *x, char c)
{
	int i = 0;

	for (; x[i] >= '\0'; i++)
	{
		if (x[i] == c)
			return (&x[i]);
	}
	return (0);
}

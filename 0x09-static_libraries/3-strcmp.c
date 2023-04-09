#include "main.h"
/**
 * _strcmp - compares string values
 * @s1: input value
 * @s2: input value
 *
 * Return: difference between the first non-matching characters
 *         or 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}

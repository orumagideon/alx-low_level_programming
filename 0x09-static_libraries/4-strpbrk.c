#include "main.h"
/**
 * _strpbrk - Entry point
 * @q: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *q, char *accept)
{
	int k;

	while (*q)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*q == accept[k])
		return (q);
		}
	q++;
	}

return ('\0');
}

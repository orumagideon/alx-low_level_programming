#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry point
 * @xc: int input
 * @xv: double pointer array
 * Return: 0
 */
char *argstostr(int xc, char **xv)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (xc == 0 || xv == NULL)
		return (NULL);

	for (i = 0; i < xc; i++)
	{
		for (n = 0; xv[i][n]; n++)
			l++;
	}
	l += xc;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < xc; i++)
	{
	for (n = 0; xv[i][n]; n++)
	{
		str[r] = xv[i][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

#include "main.h"
/**
 * _memset - a function fills a block of memory with a specific value
 * @a: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *a, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		a[i] = b;
		n--;
	}
	return (a);
}

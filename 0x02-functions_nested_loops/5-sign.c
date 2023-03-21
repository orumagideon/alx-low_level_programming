#include "main.h"


/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Description: This function prints the sign of a number, where
 *              + is printed if the number is positive, 0 is printed
 *              if the number is zero, and - is printed if the number
 *              is negative.
 *
 * Return: 1 if n is positive, 0 if n is zero, and -1 if n is negative.
 */
	int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

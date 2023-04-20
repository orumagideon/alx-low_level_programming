#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function returns the sum of all its paramters.
 * @n: number of paramters passed to the function.
 * @...: variable number of paramters to calculate the sum.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int y, sum = 0;

	va_start(ap, n);

	for (y = 0; y < n; y++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

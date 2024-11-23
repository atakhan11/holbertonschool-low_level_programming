#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of elements
 * @n: - number of elements in array
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list t;

	if (n == 0)
		return (0);

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(t, int);
	}
	va_end(t);
	return (sum);
}

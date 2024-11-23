#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the elements
 * @separator: - separator of numbers
 * @n: - number of elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list t;

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(t, int));
		if (i != (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(t);
	printf("\n");
}

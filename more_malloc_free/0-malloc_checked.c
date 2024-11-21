#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for given size
 * @b: - the size of memory
 * Return: returns the pointer
 */

void *malloc_checked(unsigned int b)
{
	char *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}

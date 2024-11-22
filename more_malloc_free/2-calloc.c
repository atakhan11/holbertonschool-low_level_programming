#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for given size
 * @nmemb: - number of elements
 * @size: - size of elements
 * Return: returns the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int  i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		arr[i] = 0;
	}
	return (arr);
}

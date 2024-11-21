#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates array with given size
 * @size: - size of array
 * @c: - character of every element
 * Return: Every element of array
 */


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int j;

	j = 0;
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (0);
	}
	if (size == 0)
		return (NULL);
	while (j < size)
	{
		arr[j] = c;
		j++;
	}
	return (arr);
}	

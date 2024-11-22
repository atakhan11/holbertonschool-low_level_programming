#include "main.h"
#include <stdlib.h>

/**
 * array_range - gives the  array from min to max
 * @min: - minimum element
 * @max: - maximum element
 * Return: returns the pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for ( ; min < max + 1; min++)
	{
		arr[i] = min;
		i++;
	}
	return (arr);
}	

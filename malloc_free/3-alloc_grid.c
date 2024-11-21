#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - copy and return input str
 * @width: - number of elements in each row
 * @height: -  number of rows
 * Return: Every element of array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
	return (NULL);

	arr = malloc((height) * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc((width) * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}	

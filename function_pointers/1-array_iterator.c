#include "function_pointers.h"
/**
 * array_iterator - prints each element of array with new line
 * @array: - input of array
 * @action: - pointer to function
 * @size: - size of given array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

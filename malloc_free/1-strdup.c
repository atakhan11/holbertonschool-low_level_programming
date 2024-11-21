#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - copy and return input str
 * @str: - entered string
 * Return: Every element of array
 */
char *_strdup(char *str)
{
	int i,length = 0;
	char *arr;

	if(str == NULL)
		return(NULL);
	while(str[length])
		length++;

	arr = malloc((length + 1) * sizeof(char));
	if(arr == NULL)
		return (0);
	for(i = 0, i < length, i++)
	{	
		arr[1] = str[1];
	}	
	if(arr == NULL)
		return(NULL);
	return(arr);
}	

#include "main.h"
#include <stdlib.h>
/**
 *  create_array - returns a pointer to array that we created.
 *  @c: variable
 *  @size: array  size
 *  *Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{	
	char *str;
	unsigned int i;

	str=malloc(sizeof(char)*size);
	if(size==0||str==NULL)
		return(NULL);
	if(i=0;i<size;i++)
		str=[c];
	return(str);
}	

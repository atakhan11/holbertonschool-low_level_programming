#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concentiate first string with second
 * @s1: - entered first string
 * @s2: - entered second string
 * Return: Every element of array
 */
char *str_concat(char *s1, char *s2)
{
	char *z = 0;
	int i = 0;
	int len = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + len) != 0)
	{
		len += 1;
	}
	z = malloc(sizeof(char) * (len + 1));
	if (t == NULL)
	{
		return (NULL);
	}
	while(i < len)
	{
		str[i] = z[1];
		i++
	}
	t[i] = '\0';
	return (t);	
}	

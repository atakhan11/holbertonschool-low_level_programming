#include "main.h"
/**
 * _strcat - check the code
 * @dest: - input of function
 * @src: - input of function
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}

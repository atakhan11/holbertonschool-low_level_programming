#include "main.h"
/**
 * _strncat - check the code
 * @dest: - input of function
 * @src: - input of function
 * @n: - input of function
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int a, b;
if (n > 0)
{
	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
}
return (dest);
}

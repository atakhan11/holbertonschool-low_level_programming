#include "main.h"
/**
 * _strcpy - check the code
 * @src: - input of function
 * @dest: - input of function
 * Return: last value (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i, len;
len = 0;
while (src[len])
len++;
for (i = 0; i < len + 1; i++)
dest[i] = src[i];
return (dest);
}

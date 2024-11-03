#include "main.h"
/**
 * _strlen - check the code
 * @s: - input of function
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int i;
i = 0;
while (*s)
{
s++;
i++;
}
return (i);
}

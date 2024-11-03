#include "main.h"

/**
 * _isupper - checks if uppercase letter
 * @c: - input of function
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

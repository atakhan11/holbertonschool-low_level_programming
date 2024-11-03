#include "main.h"
/**
 * _puts - check the code
 * @str: - input of function
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

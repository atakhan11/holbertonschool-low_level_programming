#include "main.h"

/**
 * print_square - prints square
 * @size: - input of function
 */

void print_square(int size)
{
int t, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < size; t++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

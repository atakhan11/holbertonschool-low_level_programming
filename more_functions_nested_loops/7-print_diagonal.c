#include "main.h"

/**
 * print_diagonal - prints _ for given number's loop
 * @n: - input of function
 */

void print_diagonal(int n)
{
int t, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (t = 1; t <= n; t++)
{
for (j = 1; j < t; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}

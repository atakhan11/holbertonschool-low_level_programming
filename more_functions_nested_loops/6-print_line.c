#include "main.h"

/**
 * more_numbers - prints number 0 to 14 10 times
 */

void more_numbers(void)
{
int n, t;
for (t = 0; t < 10; t++)
{
for (n = 0; n <= 14; n++)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}

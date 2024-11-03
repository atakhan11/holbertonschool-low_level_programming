#include "main.h"
/**
 * print_rev - check the code
 * @s: - input of function
 *
 */
void print_rev(char *s)
{
int i, t;
i = 0;
while (s[i])
{
i++;
}
for (t = i - 1; t >= 0; t--)
{
_putchar(s[t]);
}
_putchar('\n');
}

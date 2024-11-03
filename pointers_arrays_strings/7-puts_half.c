#include "main.h"
/**
 * puts_half - check the code
 * @str: - input of function
 *
 */
void puts_half(char *str)
{
int i, a, t;
i = 0;
while (str[i])
{
i++;
}
if (i % 2 == 1)
{
a = (i + 1) / 2;
}
else
{
a = i / 2;
}
for (t = a; t <  i; t++)
{
_putchar(str[t]);
}
_putchar('\n');
}

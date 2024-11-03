#include "main.h"
/**
 * puts2 - check the code
 * @str: - input of function
 *
 */
void puts2(char *str)
{
int i, t;
i = 0;
while (str[i])
{
i++;
}
for (t = 0; t < i; t = t + 2)
{
_putchar(str[t]);
}
_putchar('\n');
}

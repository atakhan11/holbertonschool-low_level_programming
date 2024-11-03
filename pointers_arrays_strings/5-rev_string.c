#include "main.h"
/**
 * rev_string - check the code
 * @s: - input of function
 *
 */
void rev_string(char *s)
{
int i, t, j;
char c;
i = 0;
while (s[i])
{
i++;
}
for (t = 0, j = i - 1; t <= j; t++, j--)
{
c = s[t];
s[t] = s[j];
s[j] = c;
}
}

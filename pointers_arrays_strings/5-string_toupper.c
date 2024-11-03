#include "main.h"
/**
 * string_toupper - check the code
 * @a: - input of function
 * Return: returning of result value and success
 */
char *string_toupper(char *a)
{
int i, j;
i = 0;
while (a[i])
i++;
for (j = 0; j < i; j++)
{
if (a[j] >= 'a' && a[j] <= 'z')
{
a[j] = a[j] - 32;
}
}
return (a);


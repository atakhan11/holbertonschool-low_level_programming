#include <stdio.h>
#include "main.h"
/**
 * print_array - check the code
 * @a: - input of function
 * @n: - input of function
 */
void print_array(int *a, int n)
{
int t;
for (t = 0; t < n; t++)
{
printf("%d", a[t]);
if (t == n - 1)
break;
printf(", ");
}
printf("\n");
}

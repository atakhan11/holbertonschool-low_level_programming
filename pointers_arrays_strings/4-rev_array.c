#include "main.h"
/**
 * reverse_array - check the code
 * @a: - input of function
 * @n: - input of function
 *
 */
void reverse_array(int *a, int n)
{
int i, j, t;
j = 0;
for (i = n - 1; i > n / 2; i--)
{
t = a[i];
a[i] = a[j];
a[j] = t;
j++;
}
}

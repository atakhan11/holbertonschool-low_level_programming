#include "main.h"
/**
 * leet - check the code
 * @list: - input of function
 * Return: returning of result value and success
 */

char *leet(char *list)
{
char lower_letters[] = "aeotl";
char upper_letters[] = "AEOTL";
char encode[] = "43071";
int i = 0, j;
while (list[i])
{
for (j = 0 ; j < 5; j++)
{
if (list[i] == lower_letters[j] || list[i] == upper_letters[j])
{
list[i] = encode[j];
}
}
i++;
}
return (list);
}

#include "main.h"
/**
 * _strcmp - check the code
 * @s1: - input of function
 * @s2: - input of function
 * Return: last value (Success)
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
i = 0;
j = 0;
while (s1[i])
i++;
while (s2[j])
j++;
if (i > j)
return (-13);
else if (i < j)
return (13);
else
return (0);


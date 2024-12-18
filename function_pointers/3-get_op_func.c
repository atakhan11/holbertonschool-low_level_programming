#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - function
 * @s: pointer
 * Return: func
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while ((ops + i)->f != NULL && s[1] == '\0')
	{
		if (*((ops + i)->op) == *s)
			return ((ops + i)->f);
		i++;
	}
	return (NULL);
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints entered name
 * @name: - input of name
 * @f: - pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

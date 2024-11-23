#include <stdio.h>
#include "function_pointers.h"

/**
 *  print_name - print name with function pointer
 *  @name: pointer
 *  @f: pointer
 *  *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
#include <stdio.h>		
#include "main.h"

/**
 *  main - Main Entry
 *  @argc: variable that count things in command line.
 *  @argv: array of pointers to those strings.
 *  *Return: Success point 0.
 */
int main(int argc __attribute__((unused)), char *argv[])		
{
	printf("%s\n", *argv);
	return (0);
}	

#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - sends the value for each element
 * @d: - pointer for new variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL ||  d->owner == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}

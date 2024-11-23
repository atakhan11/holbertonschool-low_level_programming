#include "dog.h"
#include "stddef.h"
/**
 * init_dog - sends the value for each element
 * @d: - pointer for new variable
 * @name: - name of value
 * @age: - age of value
 * @owner: - owner of value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

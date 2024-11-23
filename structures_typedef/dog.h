#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct of the dog
 * @name: - struct of name
 * @age: - struct of age
 * @owner: - struct of owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

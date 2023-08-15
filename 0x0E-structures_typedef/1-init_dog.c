#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - fxn for initializing variable type struct dog
 * @d: a pointer to struct dog for initializing
 * @name: name for initializing
 * @age: age for initializing
 * @owner: owner for initializing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -function frees allocated memory for struct dog
 * @d: signifies struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

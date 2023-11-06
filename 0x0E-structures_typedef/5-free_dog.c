#include "dog.h"

/**
 * free_dog - will free a dog.
 * @d: structure variable
 */

void free_dog(dog_t *d)
{
	free((*d).owner);
	free((*d).name);
	free(d);
}

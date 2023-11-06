#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - will free a dog.
 * @d: structure variable
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).owner);
	free((*d).name);
	free(d);
}

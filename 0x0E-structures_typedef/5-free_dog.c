#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free a dog.
  * @d: dog
  * Return: None.
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

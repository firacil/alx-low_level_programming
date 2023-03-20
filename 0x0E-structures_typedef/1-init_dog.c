#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intialize variable of type struct dog.
 * @d: dog.
 * @name: dog name.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: None.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

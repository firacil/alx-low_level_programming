#include "dog.h"
#include "stdio.h"

/**
 * init_dog - intalize structures.
 * @d: structure variable
 * @name: char
 * @age: intger
 * @owner: char
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

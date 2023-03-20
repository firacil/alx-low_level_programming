#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - holds three combination of structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef of struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

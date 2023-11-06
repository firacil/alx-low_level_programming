#ifndef DOG_H
#define DOG_H


/**
 * struct dog - have many members
 * @name: charachter
 * @age: intger
 * @owner: char
 */

struct dog dog_t
{

	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

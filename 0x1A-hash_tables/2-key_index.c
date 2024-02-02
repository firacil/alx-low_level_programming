#include "hash_tables.h"

/**
 * key_index - gives you the index of the key.
 * @key: key of hash table
 * @size: size of the array of hash table
 *
 * Return: the index @key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

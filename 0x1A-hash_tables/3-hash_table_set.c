#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table to be updated
 * @key: is key of hash table
 * @value: value associated with a key
 *
 * Return: 1 at success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *vcp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	vcp = strdup(value);
	if (vcp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcp;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(vcp);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = vcp;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

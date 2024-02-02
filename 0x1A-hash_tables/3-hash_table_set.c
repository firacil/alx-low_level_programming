#include "hash_tables.h"

int hash(const char *key, int size);

/**
 * hash - function to hash a key and get index fo ht
 * @key: key of hashtable
 * @size: size of hash table
 *
 * Return: index
 */
int hash(const char *key, int size)
{
	int hash = 0, i;

	for (i = 0; key[i] != '\0'; i++)
	{
		hash += key[i];
	}
	return (hash % size);
}

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
	int index = hash(key, ht->size);

	/* createing new value pair */
	hash_node_t *newval = new_kv_pair(key, value);

	/* if slot empty, insert new pair*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = newval;
		return (1);
	}
	else
	{
		/* if slot is not empty, handle collision by chaning*/
		hash_node_t *cur = ht->array[index];

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newval;
		return (1);
	}

	return (0);
}

/**
 * new_kv_pair - function to create new key-value pair
 * @key: key of hash table
 * @value: value of hash table
 *
 * Return: newly created pair
 */
hash_node_t *new_kv_pair(const char *key, const char *value)
{
	hash_node_t *pair = malloc(sizeof(hash_node_t));

	if (pair == NULL)
		return (NULL);

	pair->key = strdup(key);
	pair->value = strdup(value);
	pair->next = NULL;

	return (pair);
}

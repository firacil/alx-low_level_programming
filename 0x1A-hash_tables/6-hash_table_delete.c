#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nod, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nod = ht->array[i];
			while (nod != NULL)
			{
				tmp = nod->next;
				free(nod->key);
				free(nod->value);
				free(nod);
				nod = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}

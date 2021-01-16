#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table
 *Return: void, no return
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *d;
	unsigned long int i;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		d = ht->array[i];
		while (d != NULL)
		{
			ht->array[i] = d->next;
			free(d->key);
			free(d->value);
			free(d);
			d = ht->array[i];
		}
	}
	free(ht->array);
	free(ht);
}

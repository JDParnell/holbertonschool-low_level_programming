#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: the size of the table to create
 *Return: table if created, NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i, d;

	if (size == 0)
		return (NULL);

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->array = malloc(sizeof(hash_node_t) * size);
	if (new_hash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new_hash->array[i] = malloc(sizeof(hash_node_t));
		if (new_hash->array[i] == NULL)
		{
			for (d = 0; d < i; d++)
			{
				free(new_hash->array[d]);
			}
			free(new_hash);
			return (NULL);
		}
	}
	return (new_hash);
}

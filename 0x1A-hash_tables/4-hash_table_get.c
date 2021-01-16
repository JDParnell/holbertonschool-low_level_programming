#include "hash_tables.h"

/**
 *hash_table_get - gets a value associated with a key
 *@ht: the table
 *@key: the key
 *Return: the value, or NULL if ke does not exist
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *parser;

	if (key == NULL || strcmp(key, "") == 0 || ht == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	for (parser = ht->array[i]; parser != NULL; parser = parser->next)
	{
		if (strcmp(key, parser->key) == 0)
		{
			return (parser->value);
		}
	}
	return (NULL);
}

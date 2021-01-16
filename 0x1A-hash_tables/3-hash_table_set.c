#include "hash_tables.h"

/**
 *hash_table_set - sets a hash table
 *@ht: the hast table
 *@key: the key to hash
 *@value: the value of the item
 *Return: 1 if success, 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *nn, *parser;

	unsigned const char *nkey = (unsigned const char *)key;

	if (!strcmp(key, ""))
		return (0);
	i = key_index(nkey, ht->size);
	if (ht->array[i] != NULL)
	{	parser = ht->array[i];
		while (parser != NULL)
		{
			if (key == parser->key)
			{	parser->value = strdup(value);
				if (parser->value == NULL)
					return (0);
				return (1); } }	}
	nn = malloc(sizeof(hash_node_t *));
	if (nn == NULL)
		return (0);
	nn->key = strdup(key);
	if (nn->key == NULL)
	{	free(nn);
		return (0); }
	nn->value = strdup(value);
	if (nn->value == NULL)
	{	free(nn->key);
		free(nn);
		return (0); }

	if (ht->array[i] != NULL)
	{	nn->next = NULL;
		ht->array[i] = nn; }
	else
	{	nn->next = ht->array[i];
		ht->array[i] = nn; }
	return (1);
}

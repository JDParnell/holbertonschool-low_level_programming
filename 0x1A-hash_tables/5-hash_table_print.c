#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: the hast table
 *Return: void no return
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int i, t = 0;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (p = ht->array[i]; p != NULL; p = p->next)
		{
			if (t == 1)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			t = 1;
		}
	}
	printf("}\n");
}

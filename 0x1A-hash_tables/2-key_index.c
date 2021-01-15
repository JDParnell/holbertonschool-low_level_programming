#include "hash_tables.h"

/**
 *key_index - returns the index for a given key
 *@key: the key
 *@size: size of hash table
 *Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

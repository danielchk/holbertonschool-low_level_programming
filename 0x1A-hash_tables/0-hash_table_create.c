#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of the hash table
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int i;

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_table_t *) * size);
	if (hasht->array == NULL)
	{
		free(hasht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hasht->array[i] = NULL;
	return (hasht);
}

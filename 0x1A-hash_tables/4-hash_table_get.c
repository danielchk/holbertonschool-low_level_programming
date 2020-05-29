#include "hash_tables.h"

/**
 * hash_table_get - returns value associated with a certain key
 * @ht: hash table
 * @key: key
 * Return: Null or value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int elmnt;
	hash_node_t *nod;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	elmnt = key_index((unsigned char *)key, ht->size);

	for (nod = ht->array[elmnt]; nod != NULL; nod = nod->next)
	{
		if (strcmp(nod->key, key) == 0)
			return (nod->value);
	}
	return (NULL);
}

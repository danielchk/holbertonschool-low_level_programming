#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node != NULL; node = tmp)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}

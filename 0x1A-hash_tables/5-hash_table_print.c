#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int flag = 0;
	unsigned int index;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		for (node = ht->array[index]; node != NULL; node = node->next)
		{
			if (flag != 0)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
		}
	}
	printf("}\n");
}

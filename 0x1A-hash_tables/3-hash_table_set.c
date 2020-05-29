#include "hash_tables.h"

/**
 * new_node - creates a node ht
 * @key: key of node
 * @value: node value
 *
 * Return: node node
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_table_t *));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
		return (NULL);
	node->value = strdup(value);
	if (node->value == NULL)
		return (NULL);
	return (node);
}

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key
 * @value: value of key
 * Return: 1 
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int count;
	hash_node_t *elmnt, *nod;

	if (ht == NULL || key == NULL || strlen(key) == 0 ||
		strcmp(key, "") == 0 || value == NULL || ht->size == 0 || ht->array == NULL)
		return (0);

	count = key_index((unsigned char *)key, ht->size);
	for (nod = ht->array[count]; nod != NULL; nod = nod->next)
	{
		if (strcmp(nod->key, key) == 0)
		{
			if (strcmp(nod->value, value) != 0)
			{
				free(nod->value);
				nod->value = strdup(value);
				if (nod->value == NULL)
					return (0);
			}
			return (1);
		}
	}
	elmnt = new_node(key, value);
	if (elmnt == NULL)
		return (0);

	elmnt->next = ht->array[count];
	ht->array[count] = elmnt;
	return (1);
}

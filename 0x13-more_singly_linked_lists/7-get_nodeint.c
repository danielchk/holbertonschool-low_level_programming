#include "lists.h"
/**
 * *get_nodeint_at_index - get number of nodes of index
 *@head: Head
 *@index: number of nodes
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;
	while (i != index)
	{
		if (node->next == NULL)
			return (NULL);

		node = node->next;
		i++;
	}
	return (node);
}

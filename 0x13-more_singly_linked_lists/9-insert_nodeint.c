#include "lists.h"
/**
 * *insert_nodeint_at_index - insert node in a specific place
 * @head: Head
 * @idx: index
 * @n: new value
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	 unsigned int i = 0;
	 listint_t *node, *nextnode;

	if (head == NULL || *head == NULL)
		return (NULL);

	nextnode = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	nextnode = *head;
	while (i < idx - 1)
	{
		nextnode = nextnode->next;
		if (nextnode == NULL)
		{
			free(node);
			return (NULL);
		}
		i++;
	}
	node->next = nextnode->next;
	nextnode->next = node;
	return (node);
}

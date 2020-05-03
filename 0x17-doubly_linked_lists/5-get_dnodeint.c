#include "lists.h"
/**
 * get_dnodeint_at_index - show the node in the index position
 * @head: header
 * @index: number of node to show
 * Return: index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;

i++;
	}
	return (head);
}

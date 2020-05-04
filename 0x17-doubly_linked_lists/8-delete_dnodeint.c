#include "lists.h"
/**
 * delete_dnodeint_at_index - delete anode a position of the index
 * @head: head
 * @index: index
 * Return: 1 if success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delnode;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	delnode = *head;
	if (index == 0)
	{
		*head = delnode->next;
		if (delnode->next != NULL)
		{
			delnode->next->prev = NULL;
		}
		free(delnode);
		return (1);
	}
	while (i < index)
	{
		if (delnode->next == NULL)
			return (-1);
		delnode = delnode->next;
i++;
	}
	delnode->prev->next = delnode->next;
	if (delnode->next != NULL)
		delnode->next->prev = delnode->prev;
	free(delnode);
	return (1);
}

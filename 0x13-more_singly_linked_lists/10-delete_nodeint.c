#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 unsigned int i = 0, j = 0;

	 listint_t *nextnode, *node;

	if (*head == NULL)
		return (-1);
	 nextnode = *head;
	while (nextnode->next != NULL)
	{
		 nextnode = nextnode->next;
		 j++;
	}
	if (index > j)
		return (-1);
	nextnode = *head;
	if (index == 0 && j != 0)
	{
		*head = nextnode->next;
		free(nextnode);
		return (1);
	}
	else if (index == 0)
	{
		*head = NULL;
		free(nextnode);
		return (1);
	}

	while (i != index)
	{
		if ((i + 1) == index)
			node =  nextnode;
		nextnode = nextnode->next;
		i++;
	}
	node->next = nextnode->next;
	free(nextnode);
	return (1);
}

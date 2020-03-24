#include "lists.h"
/**
 * *add_nodeint_end - add node at the end
 *@head: head
 * @n: New value
 * Return: returns number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode, *tmp;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);

	endnode->n = n;
	endnode->next = NULL;

	if (*head == NULL)
	{
		*head = endnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = endnode;
	}
	return (endnode);
}

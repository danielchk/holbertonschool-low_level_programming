#include "lists.h"
/**
 * insert_dnodeint_at_index - add a  new node in position n
 * @h: head
 * @idx: index of positio to the new node
 * @n: numer to add in the new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *actual, *next;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		actual = *h;
while (i < idx - 1 && actual != NULL)
{
actual = actual->next;
i++;
}
		if (actual == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = newnode;
		newnode->prev = NULL;
	}
	else
	{
		newnode->prev = actual;
		next = actual->next;
		actual->next = newnode;
	}
	newnode->next = next;
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
	return (newnode);
}

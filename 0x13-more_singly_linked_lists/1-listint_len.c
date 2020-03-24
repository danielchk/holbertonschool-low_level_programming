#include "lists.h"
/**
 * print_listint- Print number of nodes
 * @h: head of the list
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

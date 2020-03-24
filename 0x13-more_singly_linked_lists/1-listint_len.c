#include "lists.h"
/**
 * listint_len- Number of nodes
 * @h: head
 * Return: i
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

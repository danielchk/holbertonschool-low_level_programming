#include "lists.h"

/**
 * print_list - Print the list
 * @h: head of the list
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int i;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}

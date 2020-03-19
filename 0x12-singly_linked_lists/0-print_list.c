#include "lists.h"

/**
 * print_list - Print the list
 * @h: head of the list
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}

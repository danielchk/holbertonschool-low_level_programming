#include "lists.h"
/**
 * sum_listint - sum the nodes
 *
 * @head: head
 * Return: summ of the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
		return (0);

	node = head;
	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}

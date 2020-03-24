#include "lists.h"
/**
 * *add_nodeint - add a node to the beginning
 *
 * @head: head
 * @n: to add
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}

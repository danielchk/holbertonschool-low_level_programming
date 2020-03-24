#include "lists.h"
/**
 * pop_listint - delete head and show his data
 *
 * @head: head
 * Return: old head
 */
int pop_listint(listint_t **head)
{
	int ubicationold;
	listint_t *new;

	if (*head == NULL)
		return (0);

	ubicationold = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (ubicationold);
}

#include "lists.h"
/**
 * add_dnodeint - add a new node  in the beggining
 * @head: poiter to the first node
 * @n: to add
 * Return: newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;
	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;
	return (newnode);
}

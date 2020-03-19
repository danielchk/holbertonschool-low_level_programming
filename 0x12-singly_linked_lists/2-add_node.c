#include "lists.h"
/**
 * *add_node - add new nodes
 * @str: String
 * @head: Head of list
 * Return: nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int size = 0;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	if (!*head)
		node->next = NULL;
	else
		node->next = *head;
	*head = node;

	node->str = strdup(str);

	while (str[size])
		size++;

	node->len = size;

	return (node);

}

#include "lists.h"
/**
 * free_listint2 - Free memory
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *save;

	if (head == NULL || *head == NULL)
		return;

	save = *head;

	while (save != NULL && head != NULL)
	{
		tmp = save;
		save = save->next;
		free(tmp);
	}
	*head = NULL;
}

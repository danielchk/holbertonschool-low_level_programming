#include "lists.h"
/**
 * free_listint2 - Free memory
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *save;
	save = *head;

	while(head != NULL)
	{
		tmp = save;
		save = save->next;
		free(tmp);
	}
}

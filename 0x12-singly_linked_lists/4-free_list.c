#include "lists.h"
/**
 * dr_freeman - free list
 * @head: head
 */
void dr_freeman(list_t *head)
{
	if (head != NULL)
	{
		dr_freemant(head->next);
		free(head->str);
		free(head);
	}
}
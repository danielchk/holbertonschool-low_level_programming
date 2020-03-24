#include "lists.h"
/**
 * free_listint- Free
 *@head: Head of the list
 * Return: No.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

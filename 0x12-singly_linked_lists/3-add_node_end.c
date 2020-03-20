#include "lists.h"

/**
 * *add_node_end - Add node to end
 * @head: head
 * @str: new string
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *temp, *node;
    int i = 0;

    node = malloc(sizeof(list_t));
    if (node == NULL)
        return (NULL);

    if (*head == NULL)
    {
        temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        
        temp->next = node;
    }
    else
        *head = node;

    node->next = NULL;
    node->str = strdup(str);

    while(str[i] != '\0')
        i++;
    
    node->len = i;
    return (node);
}

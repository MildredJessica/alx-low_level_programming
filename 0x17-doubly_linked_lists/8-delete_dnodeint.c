#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 * @head: Pointer to the head of the dlistint_t list
 * @index: Position to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
unsigned int pos = 0;

if (*head == NULL)
return (-1);
if (index == 0)
{
free(tmp);
*head = tmp->next;
return (1);
}
while (tmp->next && pos != index)
{
pos++;
tmp = tmp->next;
}
tmp->prev->next = tmp->next;
tmp->next->prev = tmp->prev;
free(tmp);
return (1);
}

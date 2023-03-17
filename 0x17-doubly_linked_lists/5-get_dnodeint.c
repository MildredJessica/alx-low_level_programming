#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the dlistint_t list
 * @index: Position of the node to be removed
 * Return: The nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
for (; index != 0; index--)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}

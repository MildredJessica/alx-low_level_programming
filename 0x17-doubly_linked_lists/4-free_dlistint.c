#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: Pointer to the first node of the dlistint_t
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

if (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}
}

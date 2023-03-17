#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the headof the dlistint_t list
 * @n: New node data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *curr = malloc(sizeof(dlistint_t));
dlistint_t *new = malloc(sizeof(dlistint_t));

curr = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
while (curr->next)
curr = curr->next;
curr->next = new;
new->prev = curr;
return (new);
}

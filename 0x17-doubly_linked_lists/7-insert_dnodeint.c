#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the dlistint_h list
 * @idx: Positionn to add
 * @n: Data to be added
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));
unsigned int pos = 0;

if (*h == NULL || new == NULL)
return (NULL);
if (idx == 0)
{
return (add_dnodeint(h, n));
}
while (tmp->next && pos != idx - 1)
{
pos++;
tmp = tmp->next;
}
if (tmp->next == NULL)
{
return (add_dnodeint_end(h, n));
}
new->n = n;
new->prev = tmp;
new->next = tmp->next;
tmp->next->prev = new;
tmp->next = new;
return (new);
}

#include "lists.h"

/**
  * insert_nodeint_at_index - Insert node at a particular index
  * @head: Linked list
  * @idx: Index to add the new node
  * @n: The data
  * Return: The new node
  */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t *tmp = *head, *prev, *new_node;
	unsigned int pos = 0;

	if (*head == NULL)
		return (NULL);
	while (tmp != NULL && pos != idx && tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
		pos++;
	}
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (pos == idx)
	{
		prev->next = new_node;
		new_node->next = tmp;
	} else
		return (NULL);
	return (new_node);
}

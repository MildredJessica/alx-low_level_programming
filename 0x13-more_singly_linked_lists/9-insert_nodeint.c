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
	listint_t *tmp = *head, *prev = tmp, *new_node;
	unsigned int pos = 0;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (tmp != NULL && pos != idx && tmp->next != NULL)
	{
		prev = tmp;
		tmp = tmp->next;
		pos++;
	}
	if (pos == idx)
	{
		prev->next = new_node;
		new_node->next = tmp;
		tmp = new_node;
		tmp->next = new_node->next;
	} else
		return (NULL);
	return (new_node);
}

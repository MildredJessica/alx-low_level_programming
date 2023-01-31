#include "lists.h"

/**
  * add_nodeint_end - Adds node at the end of the list
  * @head: The linkedlist
  * @n: The data
  * Return: A pointer to the linked list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
	}
	return (new_node);
}

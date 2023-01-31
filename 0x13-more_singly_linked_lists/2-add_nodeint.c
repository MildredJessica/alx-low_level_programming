#include "lists.h"

/**
  * add_nodeint - Adds a node at the beginning of the list
  * @head: The linked list
  * @n: The data
  * Return: A pointer to the linkedlist
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
  * print_listint - Prints all elements of list_t list
  * @h: Linkedlist
  * Return: The number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		num_nodes++;
	}
	return (num_nodes);
}

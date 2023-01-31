#include "lists.h"

/**
  * listint_len - Returns the number of elements in a linked list
  * @h: The linked list
  * Return: The number of element
  */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;
	const listint_t *curr = h;

	while (curr != NULL)
	{
		num_elem++;
		curr = curr->next;
	}
	return (num_elem);
}

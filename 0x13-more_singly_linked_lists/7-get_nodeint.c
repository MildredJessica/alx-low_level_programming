#include "lists.h"

/**
  * get_nodeint_at_index - Gets the node at a particular index
  * @head: The linkedlist
  * @index: Index
  * Return: Node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp, *curr = head;
	unsigned int pos = 0;

	if (head == NULL)
		return (NULL);
	while (curr != NULL && pos != index && curr->next != NULL)
	{
		curr = curr->next;
		pos++;
	}
	if (pos == index)
		tmp = curr;
	else
		return (NULL);
	return (tmp);


}

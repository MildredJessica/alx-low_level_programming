#include "lists.h"

/**
  * delete_nodeint_at_index - Delete node at an index
  * @head: The linkedlist
  * @index: The position to delete
  * Return: Integer
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *rmnode;
	unsigned int count = 0;

	if (head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && count != index && tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (count == index)
	{
		rmnode = tmp;
		rmnode = rmnode->next;
		tmp->next = rmnode->next;
		free(rmnode);
	} else
		return (-1);
	return (1);
}

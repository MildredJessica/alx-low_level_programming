#include "lists.h"

/**
  * reverse_listint - Reverse a linkedlist
  * @head: The linkedlist
  * Return: Linked list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = NULL;

	while (*head)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev =  *head;
		*head = curr;
	}
	*head = prev;
	return (*head);
}

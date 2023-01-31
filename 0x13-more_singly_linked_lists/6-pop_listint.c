#include "lists.h"

/**
  * pop_listint - Deletes the node in head
  * @head: The linkedlist
  * Return: The head data(n)
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL)
		return (0);
	*head = tmp->next;
	return (tmp->n);
}

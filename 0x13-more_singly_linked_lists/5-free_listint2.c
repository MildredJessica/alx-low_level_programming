#include "lists.h"

/**
  * free_listint2 - frees the listint_t list
  * @head: The head of the linkedlist
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}

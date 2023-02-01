#include "lists.h"

/**
  * free_listint2 - frees the listint_t list
  * @head: The head of the linkedlist
  * Return: Nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp1;

	tmp = *head;
	while (head != NULL && tmp != NULL)
	{
		tmp1 = tmp;
		tmp = tmp->next;
		free(tmp1);
	}
	*head = NULL;
}

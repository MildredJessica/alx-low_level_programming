#include "lists.h"

/**
  * free_listint - frees listint_t list
  * @head: The linked list
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *node = head;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}

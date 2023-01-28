#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: The linkedlist
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
}

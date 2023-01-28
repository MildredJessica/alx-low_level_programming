#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: The linkedlist
  * Return: Nothing
  */
void free_list(list_t *head)
{
	list_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}

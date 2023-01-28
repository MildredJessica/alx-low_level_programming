#include "lists.h"

/**
  * print_list - Prints all elements of list_t
  * @h: singly linkedlist
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
				current->str == NULL ? ("nil") : current->str);
		current = current->next;
		num++;
	}
	return (num);
}

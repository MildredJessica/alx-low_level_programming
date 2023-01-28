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
		if (current->str == NULL)
		{
			printf("[0] (nil)\n"));
			current = current->next;
			num++;
		} else
		{
			printf("[%d] %s\n", current->len, currrent->str);
			current = current->next;
			num++;
		}
	}
	return (num);
}

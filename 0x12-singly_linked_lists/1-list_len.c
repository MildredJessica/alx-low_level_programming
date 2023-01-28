#include "lists.h"

/**
  * list_len - Returns the number of elements in a linkedlist
  * @h: Linked list
  * Return: size of the linked list
  */
size_t list_len(const list_t *h)
{
	const list_t *cur = h;
	size_t numOfElem = 0;

	while (cur != NULL)
	{
		numOfElem++;
		cur = cur->next;
	}
	return (numOfElem);
}

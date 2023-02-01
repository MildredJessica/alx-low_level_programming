#include "lists.h"


/**
  *_ra - reallocates memory for an array of pointers
  * to the nodes in a linked list
  * @list: the old list to append
  * @size: size of the new list (always one more than the old list)
  * @new: new node to add to the list
  * Return: pointer to the new list
  */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
  * free_listint_safe - Frees a listint_t list
  * @h: The linkedlist
  * Return: the number of nodes in the list
  */
size_t free_listint_safe(listint_t **h)
{
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (h == NULL || *h == NULL)
		return (num);
	while (*h != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (num);
}

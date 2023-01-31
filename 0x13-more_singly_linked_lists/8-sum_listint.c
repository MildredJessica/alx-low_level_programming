#include "lists.h"

/**
  * sum_listint - Sums all the data in the linkedlist
  * @head: The linkedlist
  * Return: Sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

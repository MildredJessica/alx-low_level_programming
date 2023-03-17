#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: Pointer to the head of the dlistint_t list
 * Return: The sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}

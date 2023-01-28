#include "lists.h"

/**
  * add_node - adds a new node at the beginning of the list_t
  * @head: head of the linkedlist
  * @str: string to add to the likedlist
  * Return: The linkedlist
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int n = 0;

	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	for (; str[n] != '\0'; n++)
		;

	node->len = n;
	node->next = *head;
	*head = node;

	return (node);
}
